/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QAction *menuBarRestartGame;
    QAction *actionSelect_theme;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *onMoveLabel;
    QLabel *aiLogger;
    QPushButton *throwGroup;
    QLabel *errorLogger;
    QLabel *groupValue;
    QPushButton *undoGroup;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(820, 452);
        Game->setStyleSheet(QLatin1String("Game #Talon{\n"
"	border: 1px solid red;\n"
"}"));
        menuBarRestartGame = new QAction(Game);
        menuBarRestartGame->setObjectName(QStringLiteral("menuBarRestartGame"));
        actionSelect_theme = new QAction(Game);
        actionSelect_theme->setObjectName(QStringLiteral("actionSelect_theme"));
        centralWidget = new QWidget(Game);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(610, 0, 201, 31));
        onMoveLabel = new QLabel(centralWidget);
        onMoveLabel->setObjectName(QStringLiteral("onMoveLabel"));
        onMoveLabel->setGeometry(QRect(610, 40, 191, 16));
        aiLogger = new QLabel(centralWidget);
        aiLogger->setObjectName(QStringLiteral("aiLogger"));
        aiLogger->setGeometry(QRect(200, 0, 311, 21));
        QFont font;
        font.setFamily(QStringLiteral("CF Nuclear War"));
        font.setPointSize(12);
        aiLogger->setFont(font);
        throwGroup = new QPushButton(centralWidget);
        throwGroup->setObjectName(QStringLiteral("throwGroup"));
        throwGroup->setGeometry(QRect(600, 250, 75, 23));
        throwGroup->setAutoDefault(false);
        throwGroup->setDefault(false);
        throwGroup->setFlat(false);
        errorLogger = new QLabel(centralWidget);
        errorLogger->setObjectName(QStringLiteral("errorLogger"));
        errorLogger->setGeometry(QRect(610, 70, 181, 16));
        groupValue = new QLabel(centralWidget);
        groupValue->setObjectName(QStringLiteral("groupValue"));
        groupValue->setGeometry(QRect(610, 100, 281, 21));
        undoGroup = new QPushButton(centralWidget);
        undoGroup->setObjectName(QStringLiteral("undoGroup"));
        undoGroup->setGeometry(QRect(600, 290, 75, 23));
        Game->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Game);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Game->setMenuBar(menuBar);
        statusBar = new QStatusBar(Game);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Game->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuBarRestartGame);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", 0));
        menuBarRestartGame->setText(QApplication::translate("Game", "Restart game", 0));
        actionSelect_theme->setText(QApplication::translate("Game", "Select theme", 0));
        label->setText(QApplication::translate("Game", "Player1 : tempCardPosition : ", 0));
        onMoveLabel->setText(QApplication::translate("Game", "on move : player1", 0));
        aiLogger->setText(QApplication::translate("Game", "CURRENTLY CHILLIONG OUT...", 0));
        throwGroup->setText(QApplication::translate("Game", "izbaci grupu", 0));
        errorLogger->setText(QApplication::translate("Game", "errorLogger", 0));
        groupValue->setText(QApplication::translate("Game", "gruopValie : 0", 0));
        undoGroup->setText(QApplication::translate("Game", "vrati grupu", 0));
        menuFile->setTitle(QApplication::translate("Game", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
