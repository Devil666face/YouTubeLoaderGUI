#include "loadingwindow.h"
#include "ui_loadingwindow.h"

LoadingWindow::LoadingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoadingWindow)
{
    ui->setupUi(this);
//    this->setWindowFlag(Qt::FramelessWindowHint);
//    this->setWindowFlags(Qt::CustomizeWindowHint);
    this->setWindowFlag(Qt::WindowTitleHint);
    this->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );



    QMovie *movie = new QMovie(":/new/prefix1/icons/loading.gif");
    ui->label_loading->setMovie(movie);
    movie->start();
}

LoadingWindow::~LoadingWindow()
{
    delete ui;
}

void LoadingWindow::close_window()
{
    this->close();
}
