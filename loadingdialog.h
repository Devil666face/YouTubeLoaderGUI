#ifndef LOADINGDIALOG_H
#define LOADINGDIALOG_H

#include <QDialog>
#include <QMovie>
#include <QStyle>
#include <QDesktopWidget>

namespace Ui {
class LoadingDialog;
}

class LoadingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoadingDialog(QWidget *parent = nullptr);
    ~LoadingDialog();

private:
    Ui::LoadingDialog *ui;

private slots:
    void close_window();
};

#endif // LOADINGDIALOG_H
