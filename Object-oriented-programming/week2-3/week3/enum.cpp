#include <iostream>

enum TypeOfCard
{
    Spades = 10,
    Aces = 20,
    Hearts = 30,
    Clubs = 40
};

void print(TypeOfCard& t)
{
    switch(t)
    {
        case 10: std::cout << "Spades" << std::endl; break;
        case 20: std::cout << "Aces" << std::endl; break;
        case 30: std::cout << "Hearts" << std::endl; break;
        case 40: std::cout << "Clubs" << std::endl; break;
    }
}

int main()
{
    TypeOfCard type = TypeOfCard::Clubs;
    std::cout << type << std::endl;
    print(type);   
}