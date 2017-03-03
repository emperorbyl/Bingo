//
// Created by emperorbyl on 3/1/2017.
//

#include <iostream>
#include "DeckTester.h"

#include "../Deck.h"
#include "../Card.h"

void DeckTester::testConstructor() {
    Deck* deck = new Deck(3, 3, 20);
    if(deck == nullptr || deck->deck[0] == nullptr || deck->deck[1] == nullptr)
        std::cout << "There is an error in the constructor." << std::endl;
    Deck* deck1 = new Deck(2, 1, 9);
    if(!deck1->deck.empty())
        std::cout << "Something is wrong with bounds for the parameters." << std::endl;
    Deck* deck2 = new Deck(3, 0, 21);
    if(!deck2->deck.empty())
        std::cout << "Something is wrong with bounds for the parameters." << std::endl;
    Deck* deck3 = new Deck(3,2, 8);

    if(!deck3->deck.empty())
        std::cout << "Something is wrong with bounds for the parameters." << std::endl;

}

void DeckTester::testPrint()
{
    Deck* deck = new Deck(3, 3, 23);
    deck->print(std::cout);
    if(std::cout.bad())
        std::cout << "There is a problem with the deck print function." << std::endl;
    std::cout.clear();
    deck->print(std::cout, 1);
    if(std::cout.bad())
        std::cout << "There is a problem with the single card print function." << std::endl;
}