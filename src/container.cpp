#include "container.h"

Container::Container()
{
}

Container::~Container()
{
}

bool Container::push(const Card& card)
{
    if (_cards.size() == 0)
    {
        _cards.push_back(card);
        return true;
    }
    if (_cards.back().isBlack() == card.isBlack())
    {
        return false;
    }

    _cards.push_back(card);
    return true;
}

const Card& Container::pop()
{
    if (_cards.size() == 0)
    {
        return Card(-1, Card::SUIT::null);
    }

    Card buffer_card = _cards.back();
    _cards.pop_back();
    return buffer_card;
}

const std::vector<Card>& Container::getCards()
{
    return _cards;
}


