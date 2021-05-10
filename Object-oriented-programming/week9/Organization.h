#pragma once
#include "Institution.h"
#include <string>
#include <vector>

class Organization : public Institution
{
    private:
    size_t group_id;
    std::vector<Institution*> institution_list;
    std::string organization_address;
    
    public:
    bool valid() const
    {
        for(int i = 0; i < institution_list.size(); i++)
        {
            if(institution_list[i]->getIT() == GROUP)
            {
                return true;
            }
        }
        return false;
    }

    
};