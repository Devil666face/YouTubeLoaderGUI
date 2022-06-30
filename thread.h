#ifndef THREAD_H
#define THREAD_H
#include <QThread>
#include <QProcess>
#include <QDebug>
#include <QApplication>

class Thread : public QThread
{
    Q_OBJECT
public:
    Thread(QString url_to_channel);
    QString url;
    void run();

signals:
    void thread_finish();
};

#endif // THREAD_H
