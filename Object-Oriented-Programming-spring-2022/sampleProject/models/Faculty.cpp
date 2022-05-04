#pragma once
#include <string>

class Faculty 
{
    private:
    std::string name;
    size_t yearStarted;

    public:
    Faculty(std::string _name, size_t _yearStarted)
    {
        name = _name;
        yearStarted = _yearStarted;
    }
    //getters and setters
    std::string getName();
    void setName(std::string);
};