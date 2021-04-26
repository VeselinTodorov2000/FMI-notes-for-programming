#include <iostream>
#include <vector>
#include "FMIPerson.h"
#include "Asistant.h"
#include "Lector.h"
#include "Student.h"
#include "task.cpp"
int main()
{
    /*
    std::vector<FMIPerson*> fmiList;
    fmiList.push_back(new Asistant());
    fmiList.push_back(new Lector());
    fmiList.push_back(new Student());

    for(int i = 0; i < fmiList.size(); i++)
    {
        std::cout << fmiList[i]->getIdentificator() << std::endl;
    }   */
    
    std::vector<Employee*> employees;
    employees.push_back(new Programmer("Ivan", 18, true, true));
    employees.push_back(new Programmer("Peter", 30, false, true));
    employees.push_back(new Manager("John", 2, 5));
    employees.push_back(new Programmer("George", 3, false, false));
    employees.push_back(new Manager("Svetlin", 40, 120));
    employees.push_back(new Programmer("Yoan", 15, true, false));
    
    for(int i = 0; i < employees.size(); i++)
    {
        if(employees[i]->getType() == Manage)
        {
            employees[i]->printInfo();
            std::cout << std::endl;
        }

    }
    return 0;
}