#pragma once
#include "FMIPerson.h"

class Lector : public FMIPerson
{
    private:
    size_t lnumber;
    double salary;

    public:
    Lector()
    {
        lnumber = 100;
        salary = 1900;
    }

    size_t getIdentificator() const
    {
        return lnumber;
    }
};