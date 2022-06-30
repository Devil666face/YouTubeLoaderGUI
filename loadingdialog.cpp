#include "loadingdialog.h"
#include "ui_loadingdialog.h"

LoadingDialog::LoadingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadingDialog)
{
    ui->setupUi(this);

//    this->setWindowFlag(Qt::WindowTitleHint);
//    this->setWindowFlags(Qt::Window | Qt::WindowCloseButtonHint);
//    this->setGeometry(
//        QStyle::alignedRect(
//            Qt::LeftToRight,
//            Qt::AlignCenter,
//            this->size(),
//            qApp->desktop()->availableGeometry()
//        )
//    );

    QMovie *movie = new QMovie(":/new/prefix1/icons/loading.gif");
    ui->label_loading->setMovie(movie);
    movie->start();
}

LoadingDialog::~LoadingDialog()
{
    delete ui;
}

void LoadingDialog::close_window()
{
    this->close();
}
