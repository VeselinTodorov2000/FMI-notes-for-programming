#pragma once
#include <cmath>
#include "Card.h"
#include <vector>
#include <time.h> 

class Deck
{
    private:
    std::vector<Card> cards;
    char serial[11];
    size_t drawnCardsCount;

    char cardValues[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    Color cardColors[4] = {SPADES, CLUBS, DIAMONDS, HEARTS};
    
    void fillDeck()
    {
        size_t cardIndex = 1;
        for(int value = 0; value < 13; value++)
        {
            for(int color = 0; color < 4; color++)
            {
                cards.push_back(Card(cardColors[color], 
                                    cardValues[value], 
                                    createSerial(cardIndex++)));
            }   
        }
    }

    char* createSerial(size_t cardIndex) 
    {
        // std::string s = std::to_string(cardIndex);
        // char const *pchar = s.c_str();
        // char cardSerial[15];
        // if(serial != nullptr) {
        //     strcpy(cardSerial, serial);
        // }
        // else
        // {
        //     strcpy(cardSerial, "default");
        // }
        // strcat(cardSerial, pchar);
        // return cardSerial;
        return "default";
    }

    void shuffle()
    {
        for(int i = 0; i < cards.size(); i++)
        {
            size_t first = rand() % cards.size();
            size_t second = rand() % cards.size();
            std::swap(cards[first], cards[second]);
        }
    }

    public:
    Deck()
    {
        drawnCardsCount = 0;
        strcpy(serial, "default");
        fillDeck();
        shuffle();
    }

    Deck(int k, const char* _serial)
    {
        drawnCardsCount = 0;
        strcpy(serial, _serial);
        for(int i = 0; i < ceil(k/52.0); i++)
        {
            fillDeck();
        }
        shuffle();
        while(cards.size() > k) 
        {
            cards.pop_back();
        }
    }

    void printAll()
    {
        for(int i = 0; i < cards.size(); i++)
        {
            cards[i].print();
        }
    }

    Card draw()
    {
        drawnCardsCount++;
        Card card = cards[cards.size() - 1];
        cards.pop_back();
        cards.insert(cards.begin(), card);
        return card;
    }

    void swap(int fstIndex, int sndIndex)
    {
        if(fstIndex >= 0 && fstIndex < cards.size() && sndIndex >= 0 && sndIndex < cards.size())
        {
            Card temp = cards[fstIndex];
            cards[fstIndex] = cards[sndIndex];
            cards[sndIndex] = temp;
        }
        else
        {
            throw std::out_of_range("Index out of range");
        }
    }

    size_t suit_count(CardColor color)
    {
        size_t count = 0;
        for(std::vector<Card>::iterator it = cards.begin(); it != cards.end(); ++it)
        {
            if((*it).getCardColor() == color)
            {
                ++count;
            }
        }

        return count;
    }

    size_t rank_count(char rank) 
    {
        size_t count = 0;
        for(int i = drawnCardsCount; i < cards.size(); i++)
        {
            if(cards[i].getCardValue() == rank)
            {
                ++count;
            }
        }
        return count;
    }
};