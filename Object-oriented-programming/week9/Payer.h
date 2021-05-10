#pragma once
#include <string>
#include <functional>

class Payer
{
    private:
    std::string payer_name;
    std::function<bool(size_t, size_t)> payer_member_rule;
    
    public:
    
};