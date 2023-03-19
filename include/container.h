#pragma once

#include "card.h"

#include <vector>

class Container
{
public:
    Container();
    ~Container();

    bool push(const Card& card);
    const Card& pop();

    const std::vector<Card>& getCards();

private:
    std::vector<Card> _cards;

};


