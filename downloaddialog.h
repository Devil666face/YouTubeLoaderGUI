#ifndef DOWNLOADDIALOG_H
#define DOWNLOADDIALOG_H

#include <QDialog>
#include <QDir>
#include <QUrl>
#include <QDesktopServices>

namespace Ui {
class DownloadDialog;
}

class DownloadDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DownloadDialog(QWidget *parent, QImage image, QString title);
    ~DownloadDialog();

private slots:
    void on_pushButton_video_path_clicked();

private:
    Ui::DownloadDialog *ui;
};

#endif // DOWNLOADDIALOG_H
