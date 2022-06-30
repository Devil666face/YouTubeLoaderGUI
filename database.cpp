#include "database.h"

Database::Database(QString path_to_database)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QString(qApp->applicationDirPath()+"/"+path_to_database));
    if (db.open())
        DB = db;
    else
        qDebug("DB not open");

}

QVector<Video> Database::load_videos_for_playlist(QString playlist_id)
{
    QVector <Video> video_list_for_playlist;

    QSqlQuery* query = new QSqlQuery(DB);
    query->exec(QString("SELECT * FROM '%1';").arg(playlist_id));
    while (query->next())
    {
        Video video_obj(query->value(0).toString(),
                        query->value(1).toString(),
                        load_image(query->value(2).toByteArray()));
        video_list_for_playlist.append(video_obj);
    }
    delete query;
    return video_list_for_playlist;
}

QVector<Playlist> Database::load_playlists()
{
    QVector <Playlist> all_playlists;
    QSqlQuery* query = new QSqlQuery(DB);
    query->exec(QString("SELECT * FROM playlists;"));
    while (query->next())
    {
        Playlist playlist_obj(query->value(0).toString(),
                              query->value(1).toString(),
                              load_image(query->value(2).toByteArray()),
                              load_videos_for_playlist(query->value(0).toString()));
        all_playlists.append(playlist_obj);

    }
    delete query;
    return all_playlists;
}

QImage Database::get_image_for_video_url(QString url)
{
    QVector <Playlist> all_playlist = load_playlists();
    foreach (auto playlist, all_playlist)
    {
        foreach (auto video, playlist.Videos)
        {
            if (url==video.Url)
                return video.Image;
        }
    }
}

QString Database::get_title_for_video_url(QString url)
{
    QVector <Playlist> all_playlist = load_playlists();
    foreach (auto playlist, all_playlist)
    {
        foreach (auto video, playlist.Videos)
        {
            if (url==video.Url)
                return video.Title;
        }
    }
}


QImage Database::load_image(QByteArray blob)
{
    QImage image = QImage::fromData(blob);
    return image;
}
