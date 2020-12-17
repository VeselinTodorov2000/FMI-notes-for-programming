#include <iostream>

//## print
//Напишете рекурсивна функция, която принтира на екрана елементите на масив.

//Пример
//... print_<name>(...)

//print 
void print(int* arr, size_t size)
{
    if(size == 0)
    {
        return;
    }
    if(size == 1)
    {
        std::cout << arr[size-1] << std::endl;
        return;
    }
    std::cout << arr[0] << std::endl;
    print(arr+1, size-1);
}


//atanas
void PrintNasko(int arr[],size_t size,int i)
{
	
	if (i == size)
	{
		std::cout << "Da e pregledno" << std::endl;
		return;
	}
	std::cout << arr[i]<<" ";
	i++;
	PrintNasko(arr, size, i);
}

//iliq
void printIliq(int arr[], int size)
{
	if(size == 0)
		std::cout << arr[0];
	else
	{
		std::cout << arr[size];
		printIliq(arr, size - 1);
	}

}

//niq
int printNiya (int arr[], int size)
{
	if (size==0){
		return arr[0];
	}
	else
		return printNiya(arr, size - 1);
	}

//deqn
int printDeyan(int* array, int size){
if(size==1){
	return array[size];
}
else{
	return printDeyan(array+1, size - 1);
}
}

//BOYAN
void printArrBoyan(int arr[], int size, int n){
  if( n != size){
    std::cout << arr[n] << " ";
    
    printArrBoyan(arr, size, n+1);
  }else{
    std::cout << std::endl;
  }
}

//aleks

/*void printAlex (int m[], int s){
	if(s==1)
}
*/
//mariq

//iliana

//alkan - Lakers

//stoyan

//mihaela
int printMihaela(int arr[100],int n){
	if(n==1){
		return arr[0];
	}
	else
		return 0;
		

}

//krisi


int main()
{
    int arr[] = {1, 2, 3, 4};

    printArrBoyan(arr, (sizeof(arr)/sizeof(*arr)), 0);

    print(arr, 4);
    return 0;
}

		
	