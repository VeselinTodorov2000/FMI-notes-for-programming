#pragma once
#include <string>

class Player 
{
    private:
    std::string name;
    size_t age;
    size_t wins;
    double winsCoef;
    size_t pointsCurrentGame;

    public:
    Player()
    {
        name = "Ivan Ivanov";
        age = 18;
        wins = 0;
        winsCoef = 0.0;
        pointsCurrentGame = 0;
    }

    Player(std::string _name, size_t _age, size_t _wins, double _winsCoef)
    {
        setName(_name);
        setAge(_age);
        wins = _wins;
        winsCoef = _winsCoef;
    }

    void setName(std::string _name)
    {
        name = _name;
    }

    void setAge(size_t _age)
    {
        if(18 <= _age && _age <= 90)
        {
            age = _age;
        }
    }
};