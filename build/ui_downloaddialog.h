/********************************************************************************
** Form generated from reading UI file 'downloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADDIALOG_H
#define UI_DOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *main_frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_image;
    QLabel *label_video_title;
    QPushButton *pushButton_video_path;

    void setupUi(QDialog *DownloadDialog)
    {
        if (DownloadDialog->objectName().isEmpty())
            DownloadDialog->setObjectName(QString::fromUtf8("DownloadDialog"));
        DownloadDialog->resize(514, 229);
        verticalLayout_2 = new QVBoxLayout(DownloadDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        main_frame = new QFrame(DownloadDialog);
        main_frame->setObjectName(QString::fromUtf8("main_frame"));
        main_frame->setFrameShape(QFrame::WinPanel);
        main_frame->setFrameShadow(QFrame::Raised);
        main_frame->setLineWidth(2);
        verticalLayout_3 = new QVBoxLayout(main_frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(main_frame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_image = new QLabel(frame);
        label_image->setObjectName(QString::fromUtf8("label_image"));

        verticalLayout->addWidget(label_image);


        horizontalLayout->addWidget(frame);

        label_video_title = new QLabel(main_frame);
        label_video_title->setObjectName(QString::fromUtf8("label_video_title"));

        horizontalLayout->addWidget(label_video_title);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_video_path = new QPushButton(main_frame);
        pushButton_video_path->setObjectName(QString::fromUtf8("pushButton_video_path"));

        verticalLayout_3->addWidget(pushButton_video_path);


        verticalLayout_2->addWidget(main_frame);


        retranslateUi(DownloadDialog);

        QMetaObject::connectSlotsByName(DownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadDialog)
    {
        DownloadDialog->setWindowTitle(QCoreApplication::translate("DownloadDialog", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\262\320\270\320\264\320\265\320\276 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\260", nullptr));
        label_image->setText(QCoreApplication::translate("DownloadDialog", "TextLabel", nullptr));
        label_video_title->setText(QCoreApplication::translate("DownloadDialog", "TextLabel", nullptr));
        pushButton_video_path->setText(QCoreApplication::translate("DownloadDialog", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\262\320\270\320\264\320\265\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadDialog: public Ui_DownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADDIALOG_H
