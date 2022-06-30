#include "download_thread.h"

download_thread::download_thread(QString url_to_video, QString playlist_title)
{
    url = url_to_video;
    playlist_name = playlist_title;
}

void download_thread::run()
{
    qDebug()<<"Поток запущен";
    QString path = qApp->applicationDirPath();
    QProcess proc(0);
    QStringList arg;
    arg.append(QString(url));
    if (playlist_name!="")
        arg.append(QString(playlist_name));
    proc.execute(qApp->applicationDirPath()+"/download",arg);
    proc.waitForFinished();
    proc.close();
    emit download_finish(url,playlist_name);
    this->exit();
    this->quit();
}
