/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_search;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_search;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_url;
    QGridLayout *lay_button_load;
    QFrame *frame_table;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_table;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 634);
        QIcon icon;
        icon.addFile(QString::fromUtf8("youtube-download-icon-22.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_search = new QFrame(centralwidget);
        frame_search->setObjectName(QString::fromUtf8("frame_search"));
        frame_search->setMaximumSize(QSize(16777215, 128));
        frame_search->setFrameShape(QFrame::WinPanel);
        frame_search->setFrameShadow(QFrame::Raised);
        frame_search->setLineWidth(2);
        verticalLayout = new QVBoxLayout(frame_search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_search = new QGroupBox(frame_search);
        groupBox_search->setObjectName(QString::fromUtf8("groupBox_search"));
        groupBox_search->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout = new QHBoxLayout(groupBox_search);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_url = new QLineEdit(groupBox_search);
        lineEdit_url->setObjectName(QString::fromUtf8("lineEdit_url"));

        horizontalLayout->addWidget(lineEdit_url);

        lay_button_load = new QGridLayout();
        lay_button_load->setObjectName(QString::fromUtf8("lay_button_load"));

        horizontalLayout->addLayout(lay_button_load);


        verticalLayout->addWidget(groupBox_search);


        verticalLayout_4->addWidget(frame_search);

        frame_table = new QFrame(centralwidget);
        frame_table->setObjectName(QString::fromUtf8("frame_table"));
        frame_table->setFrameShape(QFrame::WinPanel);
        frame_table->setFrameShadow(QFrame::Sunken);
        frame_table->setLineWidth(2);
        verticalLayout_3 = new QVBoxLayout(frame_table);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_table = new QGroupBox(frame_table);
        groupBox_table->setObjectName(QString::fromUtf8("groupBox_table"));
        verticalLayout_2 = new QVBoxLayout(groupBox_table);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(groupBox_table);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout_3->addWidget(groupBox_table);


        verticalLayout_4->addWidget(frame_table);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\321\207\320\270\320\272 \320\262\320\270\320\264\320\265\320\276 YouTube", nullptr));
        groupBox_search->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\201\321\213\320\273\320\272\320\260 \320\275\320\260 \320\272\320\260\320\275\320\260\320\273", nullptr));
        groupBox_table->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\265 \320\262\320\270\320\264\320\265\320\276", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
