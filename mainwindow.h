#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QThread>
#include <QDebug>
#include <QTableWidget>
#include <thread.h>
#include <animatedlabel.h>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QPushButton>
#include <database.h>
#include <playlist.h>
#include <video.h>
#include <QtMath>
#include <loadingwindow.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Database *db = new Database("database.db");
    bool playlist_state = false;
    int get_playlist_count(QVector<Playlist> all_playlist);
    int get_video_count(QVector<Playlist> all_playlist);

    void create_button_load();
    void create_button_video();
    void create_button_playlist();

    void create_table_with_playlists(QTableWidget*& tableWidget, QVector<Playlist> all_playlist);
    void create_table_with_videos(QTableWidget*& tableWidget, QVector<Playlist> all_playlist);
    void correct_tableWidget(QTableWidget*& tableWidget);
    QFrame *get_image_for_table(QImage image);
    QCheckBox *get_checkBox_for_table(QString title,QString id);
    QPushButton *get_pushButton_for_table(QString id);
    QFrame *get_video_card(QString id, QString title, QImage image);

private slots:
    void on_pushButton_load_clicked();
    void on_pushButton_video_clicked();
    void on_pushButton_playlist_clicked();
    void parsing_finished();

    void on_download_check_stateChanged(int arg1);

    void on_download_button_clicked();

private:
    Ui::MainWindow *ui;
    LoadingWindow *loadwin;

};
#endif // MAINWINDOW_H
