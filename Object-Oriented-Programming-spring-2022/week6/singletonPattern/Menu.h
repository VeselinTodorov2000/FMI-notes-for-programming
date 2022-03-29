#pragma once

class Menu 
{
    private:
    static Menu* instance; //needed for singleton
    
    Menu(); //needed for singleton
    public:
    static Menu* getInstance(); //needed for singleton
    ~Menu();
    void printMenu();
};