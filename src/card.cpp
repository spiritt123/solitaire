#include "card.h"

#include <iostream>

Card::Card(int rank, SUIT suit)
{
    _rank = 0;
    _suit = SUIT::null;
    if (rank < 1 || rank > 13)
    {
        std::cerr << "is'n rank " << rank << "\n";
        return;
    }
    if (
        suit != SUIT::diamonds &&
        suit != SUIT::hearts   &&
        suit != SUIT::clubs    &&
        suit != SUIT::spades
        )
    {
        std::cerr << "is'n suit " << suit << "\n";
        return;
    }

    _rank = rank;
    _suit = suit;
}

Card::~Card() 
{}

int Card::getRank() const
{
    return _rank;
}

Card::SUIT Card::getSuit() const
{
    return _suit;
}

bool Card::isBlack() const
{
    return  
        _suit == Card::SUIT::clubs ||
        _suit == Card::SUIT::spades;
}



