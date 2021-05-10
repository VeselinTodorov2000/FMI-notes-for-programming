#pragma once
#include <string>

class Person
{
    private:
    std::string person_name;
    size_t insurance_id;

    public:
    size_t getID() const
    {
        return insurance_id;
    }
};