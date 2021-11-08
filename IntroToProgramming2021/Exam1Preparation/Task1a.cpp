#include <iostream>

int main()
{
    // a) Черният петък наближава. За да може да пазарувате в мола, се изисква да сте над
    // 18 години и: да сте ваксиниран срещу COVID, или да сте преболедували преди по-
    // малко от 6 месеца, или да имате антитела над 100 единици, или да имате
    // отрицателен резултат от тест, направен преди по-малко от 48 часа. По въведени
    // години на човек, дали е ваксиниран, дали е преболедувал преди по-малко от 6
    // месеца, дали има над 100 единици антитела и дали има отрицателен резултат от тест
    // преди 48 ч., да се определи дали той може да пазарува в мола.

    unsigned years;
    bool isVaccinated;  
    bool wasIllInPreviousSixMonths;
    bool hasOver100Antibodies;
    bool hasNegativeTest;

    std::cin >> years 
            >> isVaccinated 
            >> wasIllInPreviousSixMonths 
            >> hasOver100Antibodies 
            >> hasNegativeTest;

    bool isOver18YearsOld = years >= 18;
    bool isVaccinatedOrWasIllOrHasOver100AntibodiesOrHasNegativeTest = 
                            isVaccinated || 
                            wasIllInPreviousSixMonths || 
                            hasOver100Antibodies || 
                            hasNegativeTest;

    bool canGoShopping = isOver18YearsOld && 
                         isVaccinatedOrWasIllOrHasOver100AntibodiesOrHasNegativeTest;

    std::cout << std::boolalpha << canGoShopping << std::endl;
    return 0;
}
