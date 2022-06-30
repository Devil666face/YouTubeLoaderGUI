#ifndef VIDEO_H
#define VIDEO_H
#include <QMainWindow>

class Video
{
public:
    Video(QString url, QString title, QImage image);
    QString Url;
    QString Title;
    QImage Image;
    bool Download;
};

#endif // VIDEO_H
