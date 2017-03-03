//
// Created by emperorbyl on 2/22/2017.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H
#include <ostream>
#include <vector>
#include "Card.h"


class Deck {
public:
    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();
    std::vector <Card*> deck;
    void print(std::ostream& out) const;
    void print(std::ostream& out, int cardIndex) const;
};


#endif //BINGO_DECK_H
