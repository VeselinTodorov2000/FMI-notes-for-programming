#pragma once
#include "Institution.h"

class Group : public Institution
{
    private:
    size_t group_id;

    public:
    bool valid() const
    {
        return institution_payer != nullptr;
    }
};