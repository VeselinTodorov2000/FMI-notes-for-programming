#include <iostream>

//struct != class

//1. abstaction
//2. encapsulation - private, public, protected
//3. inheritance - 
//4. polimorphism

//encapsulation

class Pesho
{
    //private by default
    private:
    char name[20];
    int age;

    public:
    bool is18;
};

struct Pesho1
{
    //public by default
    char name[20];
};

//inheritance
class Student
{
    char name[20];
    int age;
    //...
};

class Ivan{};
class Georgi{};

//polimorfism

//abstraction

class Animal
{
    private:
    char* type;
    int age;

    public:
    //rule of three
    Animal()
    {
        type = nullptr;
        age = 0;
    }
    
    Animal(char* newType, int newAge)
    {
        if(newType != nullptr)
        {
            type = new char[strlen(newType) + 1];
            strcpy(type ,newType);
        }
        age = newAge;
    }
    
    Animal(const Animal& other)
    {
        if(other.type != nullptr)
        {
            type = new char[strlen(other.type) + 1];
            strcpy(type, other.type);
        }
        age = other.age;
    }

    Animal& operator=(const Animal& other)
    {
        if(this != &other)
        {
            delete[] type;

            if(other.type != nullptr)
            {
                type = new char[strlen(other.type) + 1];
                strcpy(type, other.type);
            }
            age = other.age;

        }
        return *this;
    }

    ~Animal()
    {
        delete[] type;
    }

    //setters and getter
    void setAge(const int newAge)
    {
        age = newAge;
    }

    void setType(const char* newType) 
    {
        if(newType != nullptr)
        {
            delete[] type;
            type = new char[strlen(newType) + 1];
            strcpy(type, newType);
        }
    }

    int getAge() const
    {
        return age;
    }

    const char* getType() const
    {
        return type;
    }

};

int main()
{
    Pesho p;
    Pesho1 x;
    //x.name;
    //p.name;


    return 0;
}