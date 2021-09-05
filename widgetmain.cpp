#include "widgetmain.h"
#include "ui_widgetmain.h"

WidgetMain::WidgetMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetMain)
{
    ui->setupUi(this);

    QLoggingCategory::setFilterRules(QStringLiteral("qtc.ssh=false"));
}

WidgetMain::~WidgetMain()
{
    delete ui;
}

void WidgetMain::create()
{
    mRemoteProcess = mConnections->createRemoteProcess(QString::fromLatin1("/bin/ls -a").toUtf8());
    if (mRemoteProcess)
    {
        ui->plainTextEdit->appendPlainText("Command [/bin/ls -a] was sent.");
        ui->plainTextEdit->appendPlainText(" ");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("Error: UnmRemoteProcess SSH connection creates remote process.");
        ui->plainTextEdit->appendPlainText(" ");
        return;
    }
    connect(mRemoteProcess.data(), &SshRemoteProcess::started, this, &WidgetMain::sshRemoteProcessStarted);
    connect(mRemoteProcess.data(), &SshRemoteProcess::readyReadStandardOutput, this, &WidgetMain::sshRemoteProcessReadyReadStandardOutput);
    connect(mRemoteProcess.data(), &SshRemoteProcess::readyReadStandardError, this, &WidgetMain::sshRemoteProcessreadyReadStandardError);
    connect(mRemoteProcess.data(), &SshRemoteProcess::closed, this, &WidgetMain::sshRemoteProcessClosed);

    mRemoteProcess->start();
}

void WidgetMain::sshConnectionError(SshError sshError)
{
    Q_UNUSED(sshError)

    QString qString;

    qString="Error: " + mConnections->errorString();
    ui->plainTextEdit->appendPlainText(qString);
    ui->plainTextEdit->appendPlainText(" ");
}

void WidgetMain::sshConnectionConnected()
{
    ui->plainTextEdit->appendPlainText("Connected");
    ui->plainTextEdit->appendPlainText(" ");
    create();
}

void WidgetMain::sshConnectionDisconnected()
{
    ui->plainTextEdit->appendPlainText("Disconnected");
    ui->plainTextEdit->appendPlainText(" ");
}

void WidgetMain::sshConnectionDataAvailable(const QString &message)
{
    ui->plainTextEdit->appendPlainText(message);
    ui->plainTextEdit->appendPlainText(" ");
}

void WidgetMain::sshRemoteProcessStarted()
{
    ui->plainTextEdit->appendPlainText("Started");
    ui->plainTextEdit->appendPlainText(" ");
}

void WidgetMain::sshRemoteProcessReadyReadStandardOutput()
{
    QString qString;
    //QStringList qStringList;

    //qString=QString::fromLatin1(mRemoteProcess->readAllStandardOutput()).split('\n');
    qString=QString::fromLatin1(mRemoteProcess->readAllStandardOutput());
    ui->plainTextEdit->appendPlainText("StandardOutput");
    ui->plainTextEdit->appendPlainText(qString);
}

void WidgetMain::sshRemoteProcessreadyReadStandardError()
{
    QString qString;

    qString=mRemoteProcess->readAllStandardError();
    ui->plainTextEdit->appendPlainText("StandardError");
    ui->plainTextEdit->appendPlainText(qString);
    ui->plainTextEdit->appendPlainText(" ");
}

void WidgetMain::sshRemoteProcessClosed(int exitStatus)
{
    QString qString;

    qString="ExitStatus="+QString::number(exitStatus);
    ui->plainTextEdit->appendPlainText(qString);
    ui->plainTextEdit->appendPlainText(" ");
}

void WidgetMain::on_btnConnect_clicked()
{
    mParams.host=ui->lineEditHost->text();
    mParams.userName = ui->lineEditUserName->text();
    mParams.port = ui->lineEditPort->text().toInt();
    mParams.password = ui->lineEditPassword->text();

    // mParams.privateKeyFile = QDir::homePath() +  QStringLiteral("/.ssh/id_rsa");
    mParams.timeout = 5;
    //mParams.authenticationType = SshConnectionParameters::AuthenticationTypePublicKey;
    mParams.authenticationType = SshConnectionParameters::AuthenticationTypePassword;
    mParams.options = SshIgnoreDefaultProxy;
    mParams.hostKeyCheckingMode = SshHostKeyCheckingNone;

    mConnections.reset();
    mConnections = std::make_shared<SshConnection>(mParams);

    connect(mConnections.get(), &SshConnection::error, this, &WidgetMain::sshConnectionError);
    connect(mConnections.get(), &SshConnection::connected, this, &WidgetMain::sshConnectionConnected);
    connect(mConnections.get(), &SshConnection::disconnected, this, &WidgetMain::sshConnectionDisconnected);
    connect(mConnections.get(), &SshConnection::dataAvailable, this, &WidgetMain::sshConnectionDataAvailable);

    ui->plainTextEdit->clear();
    mConnections->connectToHost();
}

void WidgetMain::on_btnDisconnect_clicked()
{
    mConnections->disconnect();

    disconnect(mConnections.get(), &SshConnection::error, this, &WidgetMain::sshConnectionError);
    disconnect(mConnections.get(), &SshConnection::connected, this, &WidgetMain::sshConnectionConnected);
    disconnect(mConnections.get(), &SshConnection::disconnected, this, &WidgetMain::sshConnectionDisconnected);
    disconnect(mConnections.get(), &SshConnection::dataAvailable, this, &WidgetMain::sshConnectionDataAvailable);
}
