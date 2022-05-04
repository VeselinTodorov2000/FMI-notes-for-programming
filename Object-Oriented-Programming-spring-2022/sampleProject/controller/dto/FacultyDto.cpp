#pragma once
#include <string>

class FacultyDto 
{
    private:
    std::string name;
    
    public:
    FacultyDto(std::string _name)
    {
        name = _name;
    }
    //getters and setters
    std::string getName();
    void setName(std::string);
};