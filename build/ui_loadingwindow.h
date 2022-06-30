/********************************************************************************
** Form generated from reading UI file 'loadingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGWINDOW_H
#define UI_LOADINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_loading;

    void setupUi(QDialog *LoadingWindow)
    {
        if (LoadingWindow->objectName().isEmpty())
            LoadingWindow->setObjectName(QString::fromUtf8("LoadingWindow"));
        LoadingWindow->resize(413, 391);
        centralwidget = new QWidget(LoadingWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_loading = new QLabel(centralwidget);
        label_loading->setObjectName(QString::fromUtf8("label_loading"));

        verticalLayout->addWidget(label_loading);

        retranslateUi(LoadingWindow);

        QMetaObject::connectSlotsByName(LoadingWindow);
    } // setupUi

    void retranslateUi(QDialog *LoadingWindow)
    {
        LoadingWindow->setWindowTitle(QCoreApplication::translate("LoadingWindow", "\320\237\320\276\320\264\320\276\320\266\320\264\320\270\321\202\320\265... \320\230\320\264\320\265\321\202 \320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\260...", nullptr));
        label_loading->setText(QCoreApplication::translate("LoadingWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingWindow: public Ui_LoadingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGWINDOW_H
