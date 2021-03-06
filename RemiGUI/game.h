#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QMessageBox>

#include "playercontainer.h"
#include "card.h"
#include "selecttheme.h"
#include "talon.h"
#include "deck.h"
#include "cardtablecontainer.h"

namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();

    void playerTwoPlay();
    void playerToTalon(bool playerOne);

    void delay(double seconds, QString message);

    enum player { PLAYER1, PLAYER2};

    static int const EXIT_CODE_REBOOT = -666;

private slots:
    void on_actionSelect_theme_triggered();
    void on_throwGroup_clicked();
    void changeTempPosText();
    void changePlayer();
    void showOnThrowButton();
    void hideOnThrowButton();
    void slotReboot();
    void on_undoGroup_clicked();

private:
    Ui::Game *ui;

    QString theme;

    PlayerContainer *_Player1, *_Player2;

    Talon* talon;
    Deck*   deck;

    QVector<CardTableContainer*> table;

    bool playerOneOnMove;
    bool playerTookCard;
    bool goodOpening;
    bool playerTookCardFromTalon;
    bool firstTime;
    int groupsThrown;
    int groupValue;

    void dealCard(bool player1);
    void dealCards();

    void initSnS();

    void setBackgroundColor();

    SelectTheme *selectTheme;
    QMessageBox::StandardButton endGameDialog;

    bool endGameFlag;

    bool eventFilter(QObject* target, QEvent* event);
};

#endif // GAME_H
