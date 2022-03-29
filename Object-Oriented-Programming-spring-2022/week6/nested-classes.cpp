#include <iostream>
#include <cstring>
class Car
{
    private:
    class Tyre
    {
        private:
        size_t size;

        public:
        Tyre()
        {
            size = 20;
        }

        void set(size_t size)
        {
            this->size = size;
        }

        size_t get()
        {
            return this->size;
        }
    };

    Tyre tyres[4];

    public:

    Car() {
        for(int i = 0; i < 4; i++)
        {
            tyres[i] = Tyre();
        }
    }

    char* getTyres()
    {
        char* tyresString = new char[30];
        for(int i = 0; i < 4; i++)
        {
            
            char numberInChar[3];
            strcat(tyresString, std::to_string(tyres[i].get()).c_str());
            strcat(tyresString, " ");
        }

        return tyresString;
    }
};

int main()
{
    Car c;
    char* str = c.getTyres();
    std::cout << str << std::endl;
    return 0;
}