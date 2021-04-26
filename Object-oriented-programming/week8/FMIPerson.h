#pragma once
#include <string>

//public - visible everywhere
//private - non visible everywhere
//protected - non visible, but public in inheritants

class FMIPerson
{
    protected:
    std::string name;
    int age;

    public:
    std::string getName() const
    {
        return name;
    }
    int getAge() const
    {
        return age;
    }

    void setName(const std::string& other)
    {
        name = other;
    }

    void setAge(const int& _age)
    {
        age = _age;
    }

    virtual size_t getIdentificator() const = 0;
};