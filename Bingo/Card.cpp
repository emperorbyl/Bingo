//
// Created by emperorbyl on 2/23/2017.
//

#include <time.h>
#include <cstdlib>
#include <iomanip>

#include "Card.h"


/// The constructor for Card
/// The size of the card. \param cardSize
/// The max number that the card will reach. \param maxNumber
Card::Card(int cardSize, int maxNumber, int index)
{
    bingoGrid = new int* [cardSize];
    for(int i = 0; i < cardSize; i++)
        bingoGrid[i] = new int[cardSize];

    int number = 0;
    cardRowSize = cardSize;
    for(int i=0; i<cardSize; i++)
    {
        for(int j =0; j<cardSize; j++)
        {
            // Get a random number below the max number.
            number = rand() % maxNumber + 1;
            // Check whether the number has been used. If so get a new one.
            while(isDuplicate(number))
                number = rand() % maxNumber + 1;
            bingoGrid[i][j] = number;
        }
    }

    indexNumber = index;

}

/// This method checks whether the number has been used.
/// The random number that we are checking to so if it has been used.\param numberToCheck
/// Whether or not the number has been used. \return
bool Card::isDuplicate(int numberToCheck)
{
    bool dup = false;
    for(int i = 0; i < cardRowSize; i++)
    {
        for(int j = 0; j< cardRowSize; j++) {
            if (bingoGrid[i][j] == numberToCheck)
                dup = true;
        }
    }
    return dup;
}

/// This prints out the bingo card.
/// The out stream that is to be used. \param out
void Card::printCard(std::ostream &out) {
    for(int i = 0; i < cardRowSize; i++)
    {
        for(int j = 0; j < cardRowSize; j++)
            out <<  std::setw(4) << bingoGrid[i][j] << " ";
        out << std::endl;
    }
    out << std::endl;
}


/// The destructor that releases all of the memory.
Card::~Card()
{
    for(int i =0; i < cardRowSize; i++)
    {
            delete bingoGrid[i];
    }
    delete [] bingoGrid;
}
