#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //animated buttons
    create_button_load();
    create_button_video();
    create_button_playlist();
}
MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::get_playlist_count(QVector<Playlist> all_playlist)
{
    return all_playlist.size();
}

int MainWindow::get_video_count(QVector<Playlist> all_playlist)
{
    int video_count = 0;
    foreach (auto playlist, all_playlist)
        video_count+=playlist.Videos.size();
    return video_count;
}

void MainWindow::create_button_load()
{
    AnimatedLabel* load_button = new AnimatedLabel(this,":/new/prefix1/icons/load.gif","Загрузить",64,64);
    ui->lay_button_load->addWidget(load_button);
    connect(load_button,SIGNAL(clicked()),SLOT(on_pushButton_load_clicked()));
}

void MainWindow::create_button_video()
{
    AnimatedLabel* video_button = new AnimatedLabel(this,":/new/prefix1/icons/videos.gif","Все видео",64,64);
    ui->toolBar->addWidget(video_button);
    connect(video_button,SIGNAL(clicked()),SLOT(on_pushButton_video_clicked()));
}

void MainWindow::create_button_playlist()
{
    AnimatedLabel* playlist_button = new AnimatedLabel(this,":/new/prefix1/icons/playlist.gif","Плейлисты",64,64);
    ui->toolBar->addWidget(playlist_button);
    connect(playlist_button,SIGNAL(clicked()),SLOT(on_pushButton_playlist_clicked()));
}

void MainWindow::create_table_with_videos(QTableWidget *&tableWidget, QVector<Playlist> all_playlist)
{
    tableWidget->clear();
    tableWidget->setColumnCount(4);
    tableWidget->setRowCount(qCeil(qreal(get_video_count(all_playlist))/4));
    int i=0;
    int j=0;
    foreach (auto playlist, all_playlist)
    {
        foreach (auto video, playlist.Videos)
        {
            tableWidget->setCellWidget(i,j,get_video_card(video.Url,
                                                          video.Title,
                                                          video.Image));
            j++;
            if (j==tableWidget->columnCount())
            {
                j=0;
                i++;
            }
        }
    }
    correct_tableWidget(tableWidget);
}

void MainWindow::create_table_with_playlists(QTableWidget *&tableWidget, QVector<Playlist> all_playlist)
{
    tableWidget->clear();
    tableWidget->setColumnCount(4);
    tableWidget->setRowCount(qCeil(qreal(get_playlist_count(all_playlist))/4));
    int i=0;
    int j=0;

    foreach (auto playlist, all_playlist)
    {
        tableWidget->setCellWidget(i,j,get_video_card(playlist.Playlist_id,
                                                      playlist.Title,
                                                      playlist.Image));
        j++;
        if (j==tableWidget->columnCount())
        {
            j=0;
            i++;
        }
    }

    correct_tableWidget(tableWidget);
}

void MainWindow::correct_tableWidget(QTableWidget *&tableWidget)
{
    tableWidget->horizontalHeader()->hide();
    tableWidget->verticalHeader()->hide();
    tableWidget->horizontalHeader()->resizeContentsPrecision();
    tableWidget->verticalHeader()->resizeContentsPrecision();
    tableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    tableWidget->resizeColumnsToContents();
    tableWidget->resizeRowsToContents();
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

QFrame* MainWindow::get_image_for_table(QImage image)
{
    QLabel *image_label = new QLabel();
    image_label->setPixmap(QPixmap::fromImage(image));

    QVBoxLayout *image_lay = new QVBoxLayout();
    image_lay->addWidget(image_label);

    QFrame *image_frame = new QFrame();
    image_frame->setFrameShape(QFrame::WinPanel);
    image_frame->setFrameShadow(QFrame::Sunken);
    image_frame->setLineWidth(1);
    image_frame->setLayout(image_lay);
    image_frame->setMaximumWidth(340);
    return image_frame;
}

QCheckBox *MainWindow::get_checkBox_for_table(QString title, QString id)
{
    QCheckBox *download_check = new QCheckBox(title);
    download_check->setObjectName(QString("checkbox_%1").arg(id));
    connect(download_check,SIGNAL(stateChanged(int)),SLOT(on_download_check_stateChanged(int)));
    return download_check;
}

QPushButton *MainWindow::get_pushButton_for_table(QString id)
{
    QPushButton *download_button = new QPushButton("Загрузить");
    download_button->setObjectName(QString("button_%1").arg(id));
    connect(download_button,SIGNAL(clicked()),SLOT(on_download_button_clicked()));
    return download_button;
}

QFrame *MainWindow::get_video_card(QString id, QString title, QImage image)
{
    QVBoxLayout *v_lay = new QVBoxLayout();
    v_lay->addWidget(get_image_for_table(image));
    v_lay->addWidget(get_checkBox_for_table(title,id));
    v_lay->addWidget(get_pushButton_for_table(id));

    QFrame *frame = new QFrame();
    frame->setFrameShape(QFrame::WinPanel);
    frame->setFrameShadow(QFrame::Raised);
    frame->setLineWidth(2);
    frame->setLayout(v_lay);
    return frame;
}

void MainWindow::on_pushButton_load_clicked()
{
    ui->statusbar->showMessage("Начинаю загрузку. Ожидайте...");
    QString url_to_channel = ui->lineEdit_url->text();
    Thread *parsing_thread = new Thread(url_to_channel);
    connect(parsing_thread, SIGNAL(thread_finish()),this,SLOT(parsing_finished()));
    parsing_thread->start();

    loadwin = new LoadingWindow(this);
//    loadwin->setWindowModality(Qt::WindowModal);
    loadwin->setWindowModality(Qt::ApplicationModal);
    loadwin->show();

    connect(parsing_thread,SIGNAL(thread_finish()),loadwin,SLOT(close_window()));
}

void MainWindow::on_pushButton_video_clicked()
{
    ui->groupBox_table->setTitle("Все видео");
    create_table_with_videos(ui->tableWidget,db->load_playlists());
}

void MainWindow::on_pushButton_playlist_clicked()
{
    ui->groupBox_table->setTitle("Плейлисты");
    create_table_with_playlists(ui->tableWidget,db->load_playlists());
}

void MainWindow::parsing_finished()
{
    ui->statusbar->showMessage("Загрузка завершена");
    create_table_with_videos(ui->tableWidget,db->load_playlists());
}

void MainWindow::on_download_check_stateChanged(int arg1)
{
    qDebug()<<sender()->objectName();/*.split("_")[1].toInt()*/
}

void MainWindow::on_download_button_clicked()
{
    qDebug()<<sender()->objectName();
}
