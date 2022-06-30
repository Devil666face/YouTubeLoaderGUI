#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QApplication>
#include <playlist.h>
#include <video.h>
#include <QSqlQuery>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class Database : public QObject, public QSqlDatabase
{
    Q_OBJECT
public:
    Database(QString path_to_database);
    QVector <Playlist> load_playlists();
    QImage get_image_for_video_url(QString url);
    QString get_title_for_video_url(QString url);

private:
    QSqlDatabase DB;
    QVector <Video> load_videos_for_playlist(QString playlist_id);

//    QImage replyFinished(QNetworkReply *reply);
    QImage load_image(QByteArray blob);


};

#endif // DATABASE_H
