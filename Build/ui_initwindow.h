/********************************************************************************
** Form generated from reading UI file 'initwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITWINDOW_H
#define UI_INITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_InitWindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InitWindow)
    {
        if (InitWindow->objectName().isEmpty())
            InitWindow->setObjectName(QStringLiteral("InitWindow"));
        InitWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(InitWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(InitWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), InitWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InitWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(InitWindow);
    } // setupUi

    void retranslateUi(QDialog *InitWindow)
    {
        InitWindow->setWindowTitle(QApplication::translate("InitWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class InitWindow: public Ui_InitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITWINDOW_H
