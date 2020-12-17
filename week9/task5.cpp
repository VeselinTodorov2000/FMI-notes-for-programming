#include <iostream>

//Напишете рекурсивна функция, която проверява дали един масив от числа е подреден във възходящ ред.



//Atanas
bool IsIncreasing_Nasko(int arr[], int i) // {1,2,3,4,5} // true
										 // {5,4,3,2,1} // false
{
	if(i == 0 || i == 1)
	return true;

	if (arr[i - 1] < arr[i - 2])
		return false;

	return IsIncreasing_Nasko(arr, i - 1);
}

//Iliq
bool isIncreasingIliq(int arr[], int size)
{
	if (size <= 1)
		return true;
	else if(arr[size - 1] < arr[size - 2])
		return false;
	else
		return (isIncreasingIliq(arr, size - 1));
}

//krisi
bool isIncreasing(int *arr, int size)
{
    if(size <= 1)
    {
        return true;
    }
    
    return ( arr[] < isIncreasing( arr+1 , size-1 ));
}



//Niya
bool isIncreasingNiya (int arr[], int size)
{
	if (size<=1)
	{
		return true;
	}
	else ()
	{
		
	}

//Deyan
bool isIncreasingDeyan(int array[], int size){
	if(size<=1){
		return true;
	}
else{
if(array[size-1] <= array[size]){
	return isIncresingDeyan(size + 1);
}
}
return false;
 }
 



//BOYAN
bool isSortedBoyan(int arr[], int size){
  
  if(size == 1){
    return true;  
  }
  if(arr[0] <= arr[1])
  {
    return isSortedBoyan(arr + 1, size-1);
  }
  
  return false;
}



// Peshko
bool isSortedPeshko(int arr[], size_t size)
{
	if(size<=1)
		return true;
	if(arr[size-1] < arr[size-2])
		return false;
	else
	{
		return isSortedPeshko(arr, size-1);
	}
}

//1,2,3  3
//2,3    2

int main()
{
    
}