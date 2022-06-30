#ifndef LOADINGWINDOW_H
#define LOADINGWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include <QStyle>
#include <QDesktopWidget>

namespace Ui {
class LoadingWindow;
}

class LoadingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingWindow(QWidget *parent = nullptr);
    ~LoadingWindow();

private:
    Ui::LoadingWindow *ui;

private slots:
    void close_window();
};

#endif // LOADINGWINDOW_H
