/********************************************************************************
** Form generated from reading UI file 'talon.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALON_H
#define UI_TALON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Talon
{
public:

    void setupUi(QWidget *Talon)
    {
        if (Talon->objectName().isEmpty())
            Talon->setObjectName(QStringLiteral("Talon"));
        Talon->resize(164, 70);
        Talon->setStyleSheet(QLatin1String("#Talon{\n"
"	border: 2px solid red;\n"
"}"));

        retranslateUi(Talon);

        QMetaObject::connectSlotsByName(Talon);
    } // setupUi

    void retranslateUi(QWidget *Talon)
    {
        Talon->setWindowTitle(QApplication::translate("Talon", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Talon: public Ui_Talon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALON_H
