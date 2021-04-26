#pragma once
#include "FMIPerson.h"

class Asistant : public FMIPerson
{
    private:
    size_t anumber;
    double aSalary;

    public:
    Asistant()
    {
        anumber = 500;
        aSalary = 10;
    }
    
    size_t getIdentificator() const
    {
        return anumber;
    }
};
