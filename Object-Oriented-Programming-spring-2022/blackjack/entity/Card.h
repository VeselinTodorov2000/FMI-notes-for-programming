#pragma once
#include "CardColor.cpp"
#include <cstring>

class Card 
{
    private:
    Color cardColor;
    char cardValue;
    char serialNumber[16];

    public:
    Card() {}

    Card(const Card& other)
    {
        setCardColor(other.cardColor);
        setCardValue(other.cardValue);
        setSerialNumber(other.serialNumber);
    }

    Card& operator=(const Card& other)
    {
        if(this != &other)
        {
            setCardColor(other.cardColor);
            setCardValue(other.cardValue);
            setSerialNumber(other.serialNumber);
        }
        return *this;
    }

    Card(Color _cardColor, char _cardValue, char* _serialNumber)
    {
        setCardColor(_cardColor);
        setCardValue(_cardValue);
        setSerialNumber(_serialNumber);
    }

    Color getCardColor() const
    {
        return cardColor;
    }

    void setCardColor(Color _cardColor)
    {
        cardColor = _cardColor;
    }

    char getCardValue() const
    {
        return cardValue;
    }

    void setCardValue(char _cardValue)
    {
        cardValue = _cardValue;
    }

    const char* getSerialNumber() const
    {
        return serialNumber;
    }
        
    void setSerialNumber(const char* _serialNumber)
    {
        strcpy(serialNumber, _serialNumber);
    }

    void print()
    {
        std::string _cardColor;
        switch(cardColor)
        {
            case HEARTS: _cardColor = "Hearts"; break;
            case CLUBS: _cardColor = "Clubs"; break;
            case DIAMONDS: _cardColor = "Diamonds"; break;
            case SPADES: _cardColor = "Spades"; break;
        }
        std::cout << cardValue << " (" << 
        _cardColor << ") " << serialNumber << std::endl;
    }
};