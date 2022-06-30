#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <QMainWindow>
#include <video.h>

class Playlist
{
public:
    Playlist(QString playlist_id,
             QString title,
             QImage image,
             QVector <Video> videos);
    QString Playlist_id;
    QString Title;
    QImage Image;
    QVector <Video> Videos;
    bool Download;
};

#endif // PLAYLIST_H
