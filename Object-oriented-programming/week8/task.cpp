#pragma once
#include <string>
#include <iostream>
enum type{Program, Manage, Invalid};

class Employee
{
    protected:
    std::string name;
    size_t internMonths;
    type typeOfEmployee; 

    public:
    virtual void printInfo() = 0;
    virtual type getType() = 0; 
};

class Programmer : public Employee
{
    private:
    bool knowsCSharp;
    bool knowsCPlusPlus;

    public:
    Programmer(std::string name, size_t months, bool csharp, bool cplusplus)
    {
        typeOfEmployee = Program;
        this->name = name;
        internMonths = months;
        knowsCSharp = csharp;
        knowsCPlusPlus = cplusplus;
    }

    void printInfo()
    {
        std::cout << "Name: " << name << std::endl
                  << "Months in company: " << internMonths << std::endl
                  << "KnowsCSharp: " << std::boolalpha << knowsCSharp << std::endl
                  << "KnowsCPlusPlus: " << std::boolalpha << knowsCPlusPlus << std::endl;
    }

    type getType()
    {
        return typeOfEmployee;
    }
};

class Manager : public Employee
{
    private:
    size_t managedPeopleCounter;
    public:
  
    Manager(std::string name, size_t months, size_t managed)
    {
        typeOfEmployee = Manage;
        this->name = name;
        internMonths = months;
        managedPeopleCounter = managed;
    }
    
    
    void printInfo()
    {
        std::cout << "Name: " << name << std::endl
                  << "Months in company: " << internMonths << std::endl
                  << "People managed: " << managedPeopleCounter << std::endl;
    }
    
    type getType()
    {
        return typeOfEmployee;
    }
};