#pragma once
#include <string>
#include "Person.h"
#include "Payer.h"

enum InstitutionType{GROUP, ORGANIZATION};

class Institution
{
    protected:
    static size_t createdInstitutionsCount;
    size_t institution_id;
    std::string institution_name;
    Payer* institution_payer;
    InstitutionType it;

    public:
    
    bool hasMember(const Person& p)
    {
        return institution_payer->getPMR()(p.getID(), institution_id);        
    }

    Payer* payer() const
    {
        return institution_payer;
    }

    virtual bool valid() = 0;
    InstitutionType getIT() const
    {
        return it;
    }
};