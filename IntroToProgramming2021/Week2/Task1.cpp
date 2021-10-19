#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //-5, 0.1, 4, 125 - true
    //0, 0.0 - false
    
    //40% - 60%
    double firstTestGrade = 3;
    double secondTestGrade = 6;
    bool passedTestGradeCriteria = ((0.4 * firstTestGrade) + (0.6 * secondTestGrade)) >= 4.5;

    double homeworkGrade = 5.1;

    bool passedExamWithoutTakingIt = passedTestGradeCriteria && homeworkGrade >= 5;
    //== - equals
    //!= - not equals
    //> - more than
    //< - less than
    //>= - more than or equals
    //<= - less than or equals

    //&& - if first argument is false, don't check the second argument
    //|| - if first argument is true, don't check the second argument

    // std::cout << std::boolalpha << passedExamWithoutTakingIt << std::endl;
    
    //Задача: Програма която проверява дали дадено число е четно
    int number;
    std::cout << "Enter number:";
    std::cin >> number;
    
    if(number % 2 == 0)
    {
        std::cout << "Even" << std::endl;
    }
    else
    {
        std::cout << "Odd" << std::endl;
    }

    int number = 7;
    switch(number)
    {
        case 1: std::cout << "One"; break;
        case 2: std::cout << "Two"; break;
        case 3: std::cout << "Three"; break;
        case 4: std::cout << "Four"; break;
        case 5: std::cout << "Five"; break;
        default: std::cout << "Not in score"; break;
    }

    int number;
    std::cin >> number;
    (number % 2 == 0) ? std::cout << "Even" : std::cout << "Odd";
    return 0;
}