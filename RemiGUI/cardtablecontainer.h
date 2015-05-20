#ifndef CARDTABLECONTAINER_H
#define CARDTABLECONTAINER_H

#include "playercontainer.h"

namespace Ui {
class CardTableContainer;
}

class CardTableContainer : public PlayerContainer, public Group
{
    Q_OBJECT

public:
    CardTableContainer(QWidget *parent = 0,
                        int x = 0, int y = 0,
                        int w = 0, int h = 0);

    void addCards(QVector<Card*> _cards);
    void addCard(Card *card, bool background);


    int getContainerWidth();
    void print();
private:

    const int cardDistance = 20;
};

#endif // CARDTABLECONTAINER_H
