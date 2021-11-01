#include<iostream>

int main()
{
    //въвеждаме n от конзолата
    int n;
    std::cin >> n;
    //създаваме сума    
    int sum = 0;
    int currentMember = 1;
    //допълваме сумата
    for(int i = 1; i <= n; i++)
    {
        sum += currentMember;
        currentMember = currentMember * 10 + 1;
    }
    //извеждане на резултат
    std::cout << sum << std::endl;
    return 0;
}