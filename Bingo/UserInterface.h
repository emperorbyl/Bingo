//
// Created by emperorbyl on 2/22/2017.
//

#ifndef BINGO_USERINTERFACE_H
#define BINGO_USERINTERFACE_H

#include <string>

class Deck;

class UserInterface {
private:
    Deck*   currentDeck = nullptr;

public:
    void run();

private:
    void createDeck();
    void deckMenu();
    void printCard();
    void saveDeck();

    std::string getStringInput(std::string prompt);
    int getNumberInput(std::string prompt, int rangeMin, int rangeMax);
};


#endif //BINGO_USERINTERFACE_H
