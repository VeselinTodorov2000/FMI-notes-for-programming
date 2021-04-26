#pragma once
#include "FMIPerson.h"
class Student : public FMIPerson
{
    private:
    size_t course;
    size_t facultyNumber;
    std::string major;
    public:

    Student()
    {
        facultyNumber = 71923;
    }

    size_t getIdentificator() const
    {
        return facultyNumber;
    }
};