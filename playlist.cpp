#include "playlist.h"

Playlist::Playlist(QString playlist_id,
                   QString title,
                   QImage image,
                   QVector <Video> videos)
{
    Playlist_id = playlist_id;
    Title = title;
    Image = image;
    Videos = videos;
    Download = false;
}
