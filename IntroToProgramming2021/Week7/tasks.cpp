#include<iostream>

void task1()
{
    int numbers[100] = {0};
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }
    for(int i = n - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

void task2()
{
    int number;
    std::cin >> number;
    int digitsCounter[10] = {0};
    while(number)
    {
        digitsCounter[number%10]++;
        number/=10;
    }

    for(int i = 0; i < 10; i++)
    {
        std::cout << i << " : " << digitsCounter[i] << std::endl;
    }
}

bool task3()
{
    int numbers[100] = {0};
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }
    for(int i = 0; i < n/2; i++)
    {
        if(numbers[i] != numbers[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

// От едно множество от цели числа направете всички негови двуелементни подмножества.
void task4()
{
    int set[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        for(int j = i; j < 5; j++)
        {
            std::cout << "(" << set[i] << ";" << set[j] << ")" << std::endl;
            if(set[i] != set[j])
            {
                std::cout << "(" << set[j] << ";" << set[i] << ")" << std::endl;
            }
        }
    }
}

// Намерете всички срещания на дадено число в масив 
// и запишете индексите им в нов масив.
void task5()
{
    int arr[10] = {1,5,2,2,5,3,3,3,5,4};
    int indexes[10] = {-1};
    int cnt = 0;
    int n;
    std::cin >> n;
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == n)
        {
            indexes[cnt] = i;
            cnt++;
        }
    }

    for(int i = 0; i < cnt; i++)
    {
        std::cout << indexes[i] << std::endl;
    }
}

// Вмъкнете в масив число на дадена позиция.
void task6()
{
    int arr[15] = {1};
    int number, position;
    std::cin >> number >> position;
    for(int i = 14; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = number;

    for(int i = 0; i < 15; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

// Сортирайте масив от цели числа
void task7()
{
    const int size = 5;
    int arr[size] = {3, 5, 2, 4, 1};

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    // std::cout << std::boolalpha << task3() << std::endl;
    task7();
    return 0;
}