#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//task 1
void swap1(double* first, double* second)
{
    double temp = *first;
    *first = *second;
    *second = temp;
}

void swap2(double& first, double& second)
{
    double temp = first;
    first = second;
    second = temp;
}


//task 2
void print(int arr[], size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//task 3
void bubbleSort(double arr[], size_t size)
{
    bool swapped;
    for(size_t i = 0; i < size - 1; i++)
    {
        swapped = false;
        for(size_t j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapped = true;
                swap2(arr[j], arr[j+1]);
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}

void insertionSort(double arr[], size_t size)
{
    int j;
    for(int i = 1; i < size; i++)
    {
        double key = arr[i];
        
        for(j = i - 1; j >= 0 && key < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        
        arr[j + 1] = key;
    }
}

//Bonus

void mergeSorted(int arr1[], size_t size1, int arr2[], size_t size2)
{
    int arr3[100];
    int cnt1 = 0, cnt2 = 0;
    size_t i = 0;
    for(; cnt1 < size1 && cnt2 < size2; i++)
    {
        if(arr1[cnt1] < arr2[cnt2])
        {
            arr3[i] = arr1[cnt1++];
        }
        else
        {
            arr3[i] = arr2[cnt2++];
        }
    }

    while(cnt1 < size1)
    {
        arr3[i] = arr1[cnt1];
        i++;
        cnt1++;
    }

    while(cnt2 < size2)
    {
        arr3[i] = arr2[cnt2];
        i++;
        cnt2++;
    }

    print(arr3, i);
}

int main()
{
}

