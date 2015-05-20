/********************************************************************************
** Form generated from reading UI file 'card.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARD_H
#define UI_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QLabel *label;

    void setupUi(QWidget *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QStringLiteral("Card"));
        Card->resize(67, 93);
        Card->setStyleSheet(QLatin1String("#Card{\n"
"	border: 1px solid black;\n"
"}\n"
""));
        label = new QLabel(Card);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 47, 13));

        retranslateUi(Card);

        QMetaObject::connectSlotsByName(Card);
    } // setupUi

    void retranslateUi(QWidget *Card)
    {
        Card->setWindowTitle(QApplication::translate("Card", "Form", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARD_H
