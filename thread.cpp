#include "thread.h"

Thread::Thread(QString url_to_channel)
{
    url = url_to_channel;
    qDebug()<<"Поток создан";
}

void Thread::run()
{
    qDebug()<<"Поток запущен";
    QString path = qApp->applicationDirPath();
    QProcess proc(0);
    QStringList arg;
    arg.append(QString(url));
    proc.execute(qApp->applicationDirPath()+"/parser",arg);
    proc.waitForFinished();
    proc.close();
    emit thread_finish();
    this->exit();
    this->quit();
}
