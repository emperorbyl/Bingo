//
// Created by emperorbyl on 2/23/2017.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H


#include <ostream>

class Card {
private:
    int indexNumber;
    int cardRowSize = 0;
public:
    int** bingoGrid;
    Card(int cardSize, int maxNumber, int index);
    ~Card();
    bool isDuplicate(int numToCheck);
    int getIndexNumber() {return indexNumber;}
    void printCard(std::ostream& out);

};


#endif //BINGO_CARD_H
