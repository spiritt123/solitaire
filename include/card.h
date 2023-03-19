#pragma once


class Card
{

public:
    enum SUIT
    {
        diamonds, 
        hearts,   
        clubs,   
        spades,
        null
    };

public:
    Card() = delete;
    Card(int rank, SUIT suit);
    ~Card();

    int getRank() const;
    SUIT getSuit() const;
    bool isBlack() const;

private:
    int  _rank;
    SUIT _suit;
};


