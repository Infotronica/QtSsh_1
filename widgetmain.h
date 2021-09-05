#ifndef WIDGETMAIN_H
#define WIDGETMAIN_H
#pragma once

#include <memory>
#include <cstdlib>
#include <functional>

#include <QWidget>
#include <QDir>
#include <QDebug>
#include <QLoggingCategory>
#include <ssh/sshconnection.h>
#include <ssh/sshremoteprocess.h>

using namespace QSsh;

namespace Ui {
class WidgetMain;
}

class WidgetMain : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetMain(QWidget *parent = 0);
    ~WidgetMain();

    void create();

public slots:
    void sshConnectionError(QSsh::SshError sshError);
    void sshConnectionConnected();
    void sshConnectionDisconnected();
    void sshConnectionDataAvailable(const QString &message);
    void sshRemoteProcessStarted();
    void sshRemoteProcessReadyReadStandardOutput();
    void sshRemoteProcessreadyReadStandardError();
    void sshRemoteProcessClosed(int exitStatus);

private slots:
    void on_btnConnect_clicked();

    void on_btnDisconnect_clicked();

private:
    SshConnectionParameters mParams;
    std::shared_ptr<SshConnection> mConnections;
    QSharedPointer<SshRemoteProcess> mRemoteProcess;

private:
    Ui::WidgetMain *ui;
};

#endif // WIDGETMAIN_H
