#include<iostream>

int main()
{
    // Имаме n на брой картофи, всеки от които с цена m. Освен това, от
    // стандартния вход получаваме сума, с която разполагаме и да дали
    // използваме ваучер от 15% намаление. Напишете булев израх,
    // оценяващ това, дали е възможно да направим следната покупка.

    //Четем информацията
    int numberOfPotatoes = 5;
    double priceOfPotato = 1.4;
    double ourFunds = 6.6;
    bool haveVoucher = true;
    //Сметнем цената на картофите
    double priceOfPotatoes = numberOfPotatoes * priceOfPotato;
    //Проверка дали ще използваме ваучер и прилагането му
    if (haveVoucher)
    {
        priceOfPotatoes = priceOfPotatoes - (priceOfPotatoes * 0.15);
    }
    //Булевия израз
    bool canMakePurchase = ourFunds >= priceOfPotatoes;
    std::cout << std::boolalpha << canMakePurchase << std::endl;

    return 0;
}