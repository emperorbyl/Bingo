//
// Created by emperorbyl on 2/22/2017.
//

#include <cmath>
#include "Deck.h"

/// The constructor for the deck.
/// The number of rows and columns for the card. \param cardSize
/// How many cards the deck is to have. \param cardCount
/// The max number that is to be on the card. \param numberMax
Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    if(cardSize >= 3 && cardSize <= 15 && cardCount > 2 && cardCount < 10001 && numberMax >= 2 * pow(cardSize, 2) && numberMax <= 4 * pow(cardSize, 2)) {
        for (int i = 0; i < cardCount; i++)
        {
            Card *card = new Card(cardSize, numberMax, i + 1);
            deck.push_back(card);
        }
    }
}

/// The destructor that releases all of the memory used.
Deck::~Deck()
{
    for(int i = 0; i < deck.size(); i++)
    {
        delete deck[i];
        deck.pop_back();
    }

}

/// This method prints the whole deck.
/// The outstream to be used. \param out
void Deck::print(std::ostream& out) const
{
    for(int j = 0; j < deck.size(); j++)
    {
        deck[j]->printCard(out);
    }
}

/// This method prints the individual cards.
/// The out stream that is to be used. \param out
/// The index of the card to be printed. \param cardIndex
void Deck::print(std::ostream& out, int cardIndex) const
{
    for(int j = 0; j < deck.size(); j++)
    {
        if(deck[j]->getIndexNumber() == cardIndex)
            deck[j]->printCard(out);
    }
}