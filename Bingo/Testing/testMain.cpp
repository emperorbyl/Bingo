//
// Created by emperorbyl on 2/22/2017.
//

#include <iostream>
#include <ctime>

#include "MenuOptionTester.h"
#include "MenuTester.h"
#include "CardTester.h"
#include "DeckTester.h"

int main()
{



    // TODO: Test your components

    MenuOptionTester menuOptionTester;
    menuOptionTester.testConstructorAndGetter();

    MenuTester menuTester;
    menuTester.testConstructorAndGetter();

    CardTester cardTester;
    cardTester.testConstructor();
    cardTester.testPrint();
    cardTester.testIsDuplicate();
    cardTester.testDestructor();

    DeckTester deckTester;
    deckTester.testConstructor();
    deckTester.testPrint();
}