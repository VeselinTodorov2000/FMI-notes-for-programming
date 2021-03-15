#include <iostream>

//task 1
class Time
{
    private:
    size_t hour;
    size_t minutes;

    public:
    //constructor
    Time();
    Time(size_t, size_t);
    
    //a)
    void setHour(size_t);
    void setMinutes(size_t);
    size_t getHour() const;
    size_t getMinutes() const;

    //b)
    void addMinutes(size_t);

    //c)
    size_t minutesFromMidnight();
    
    void print();
};

Time::Time()
{
    setHour(0);
    setMinutes(0);
}

Time::Time(size_t hour, size_t minutes)
{
    setHour(hour);
    setMinutes(minutes);
}

void Time::setHour(size_t hour)
{
    if(hour <= 23)
    {
        this->hour = hour;
    }
    else
    {
        std::cout << "Invalid" << std::endl;
    }
}

void Time::setMinutes(size_t minutes)
{
    if(minutes <= 59)
    {
        this->minutes = minutes;
    }
    else
    {
        std::cout << "Invalid" << std::endl;
    }
}

size_t Time::getHour() const
{
    return hour;
}

size_t Time::getMinutes() const
{
    return minutes;
}

//c
size_t Time::minutesFromMidnight()
{
    return hour*60 + minutes;
}

//b
void Time::addMinutes(size_t added)
{
    size_t allMinutes = minutesFromMidnight() + added; //12:30 45 = (720+30) + 45 = 795 
    hour = (allMinutes / 60) % 24;
    minutes = allMinutes % 60;
}

void Time::print()
{
    std::cout << getHour() << ":" << getMinutes() << std::endl;
}

int main()
{
    Time t;
    t.setHour(12);
    t.setMinutes(30);
    t.print();
    std::cout << t.minutesFromMidnight() << std::endl;
    t.addMinutes(45);
    t.print(); 
    return 0;
}