#include <iostream>
#include "./entity/Deck.h"

int main()
{
    Deck deck(5, "hello");
    deck.printAll();

    std::cout << "Drawn" << std::endl;
    deck.draw().print();
    std::cout << std::endl;

    deck.printAll();

    deck.swap(1, 2);
    return 0;
}