//
// Created by emperorbyl on 3/1/2017.
//

#include <iostream>
#include "CardTester.h"

#include "../Card.h"

///Create a card and check its data members.
void CardTester::testConstructor()
{
    Card* card = new Card(3, 20, 0);
    if(card->getIndexNumber() != 0)
        std::cout << "The index is off" << std::endl;
    if(card->bingoGrid[0][0] == NULL)
        std::cout << "The grid was not initialized correctly." << std::endl;

}

///Create a card, give it a duplicate, and test to see if it is a duplicate.
void CardTester::testIsDuplicate()
{
    Card* card = new Card(3, 23, 0);
    bool dup = false;
    int i = 0;

    for(int k = 0; k < 3; k++)
    {
        for(int j = 0; j < 3; j++)
        while (i < 23 && !dup) {
            dup = card->isDuplicate(i);
            i++;
        }
    }
    if(!dup)
        std::cout << "Something is wrong the isDuplicate method." << std::endl;
}

///Create a deck, run the print, and see if the cout is valid.
void CardTester::testPrint()
{
    Card* deck = new Card(3, 23, 0);
    deck->printCard(std::cout);
    if(std::cout.bad())
        std::cout << "There is a problem with the deck print function." << std::endl;
}

/// Create a Card, get the address, see what's in it before and after destructor.
void CardTester::testDestructor()
{
    std::cout << "The Destructor tester." << std::endl;
    Card* card = new Card(3, 21, 1);
    int*** address = &card->bingoGrid;
    std::cout << address << std::endl;
    card->~Card();
    std::cout << address << std::endl;
    int content = ***address;
    if(content == NULL)
        std::cout << "There is an issue with the destructor." << std::endl;

}