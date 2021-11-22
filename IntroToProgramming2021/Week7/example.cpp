#include <iostream>

int main()
{
    int facultyNumber[10]; //0 .. 9 //0 | 1 .. 10
    //[facultyNumber[0]][facultyNumber[1]][facultyNumber[2]][][][][][][][facultyNumber[9]]
    // facultyNumber[4]

    //имаме клас от 8 деца. Да се напише програма която въвежда годишна оценка
    //на всяко дете и намира максималната
    const size_t MAX_SIZE = 8;
    double grade[MAX_SIZE];
    double max = 0;
    for(int index = 0; index < MAX_SIZE; index++)
    {
        do
        {
            std::cin >> grade[index];
        } while (grade[index] < 2 || grade[index] > 6);
        if(grade[index] > max)
        {
            max = grade[index];
        }
    }

    std::cout << max << std::endl;

    int n = 15;
    double array[n]; //това не е коректно!!!

    std::cout << grade << std::endl;
    std::cout << sizeof(grade) << std::endl;
    std::cout << sizeof(bool) << std::endl;
    std::cout << sizeof(char) << std::endl;
}