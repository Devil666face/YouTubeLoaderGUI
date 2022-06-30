/********************************************************************************
** Form generated from reading UI file 'loadingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGDIALOG_H
#define UI_LOADINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoadingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_loading;

    void setupUi(QDialog *LoadingDialog)
    {
        if (LoadingDialog->objectName().isEmpty())
            LoadingDialog->setObjectName(QString::fromUtf8("LoadingDialog"));
        LoadingDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(LoadingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_loading = new QLabel(LoadingDialog);
        label_loading->setObjectName(QString::fromUtf8("label_loading"));

        verticalLayout->addWidget(label_loading);


        retranslateUi(LoadingDialog);

        QMetaObject::connectSlotsByName(LoadingDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadingDialog)
    {
        LoadingDialog->setWindowTitle(QCoreApplication::translate("LoadingDialog", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        label_loading->setText(QCoreApplication::translate("LoadingDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingDialog: public Ui_LoadingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGDIALOG_H
