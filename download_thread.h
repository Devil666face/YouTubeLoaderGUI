#ifndef DOWNLOAD_THREAD_H
#define DOWNLOAD_THREAD_H
#include <QThread>
#include <QProcess>
#include <QDebug>
#include <QApplication>

class download_thread  : public QThread
{
    Q_OBJECT
public:
    download_thread(QString url_to_video, QString playlist_title);
    QString url;
    QString playlist_name;
    void run();

signals:
    void download_finish(QString url_to_video, QString playlist_name);
};

#endif // DOWNLOAD_THREAD_H
