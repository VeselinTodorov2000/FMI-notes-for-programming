#include "Menu.h"
#include <cassert>

Menu *Menu::instance = nullptr;

int main() 
{
    Menu* instance1 = instance1->getInstance();
    Menu* instance2 = instance2->getInstance(); //the instance is same as instance1

    assert(instance1 == instance2);
    return 0;
}