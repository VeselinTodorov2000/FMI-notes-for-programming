#include<iostream>
#include<cstring>

struct Person 
{
    public:
    //data fields/attributes
    char name[20];
    int age;
    char gender; //m - male, f - female

    //getters and setters
    const char* getName() const //const at the end means that the method does not change object that invokes it  
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    char getGender() const
    {
        return gender;
    }

    void setName(const char* nameToSet)
    {
        if(nameToSet != nullptr)
        {
            strcpy(name, nameToSet);
        }
    }

    void setAge(const int ageToSet)
    {
        ageToSet > 0 ? ageToSet : 18;
    }

    void setGender(const int genderToSet)
    {
        (genderToSet == 'm' || genderToSet == 'f') ? genderToSet : 'm';
    }

    //constructors
    Person() //default constructor - used when no other constructor invoked
    {
        strcpy(name, "Ivan Ivanov");
        age = 18;
        gender = 'm';
    }

    Person(char* nameToSet, int ageToSet, char genderToSet) //general purpose constructor
    {
        setName(nameToSet);
        setAge(ageToSet);
        setGender(genderToSet);
    }

    Person(const Person& other) //copy constructor
    {
        this->setName(other.getName());
        this->setAge(other.getAge());
        this->setGender(other.getGender());
    }
};