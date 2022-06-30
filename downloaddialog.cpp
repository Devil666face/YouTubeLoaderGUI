#include "downloaddialog.h"
#include "ui_downloaddialog.h"

DownloadDialog::DownloadDialog(QWidget *parent, QImage image, QString title) :
    QDialog(parent),
    ui(new Ui::DownloadDialog)
{
    ui->setupUi(this);
    ui->label_image->setPixmap(QPixmap::fromImage(image));
    ui->label_video_title->setText(title);
}

DownloadDialog::~DownloadDialog()
{
    delete ui;
}

void DownloadDialog::on_pushButton_video_path_clicked()
{
    QDir Dir(qApp->applicationDirPath()+"/videos");
    QDesktopServices::openUrl(QUrl(QUrl::fromLocalFile(Dir.absolutePath())));
}
