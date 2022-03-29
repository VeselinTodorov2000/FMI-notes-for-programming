#include <iostream>

class Tyres
{
    private:
    int count;

    public:
    Tyres() {count = 4;}

    friend class Car;
};

class Car
{
    private:
    int yearofpublishing;

    public:
    void showTyresCount()
    {
        Tyres t = Tyres();
        std::cout << t.count << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Car& car)
    {
        out << car.yearofpublishing;
        return out;
    }    
};

int main()
{
    Car car;
    std::cout << car << std::endl;
}