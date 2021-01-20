#include <iostream>
using namespace std;

int min(int a, int b)
{
    return (a < b) ? a : b;
}
//Напишете рекурсивна функция, която приема масив и връща минималния му елемент.

//BOYAN
void minElemBoyan(int arr[]){
  int size = (sizeof(arr)/sizeof(*arr));
  int min = INT_MAX;
  cout << helperBoyan(arr,size,0,min);
}

int helperBoyan(int arr[], int size, int n, int min){
  if(n == size){
    return min;
  }
  
  if(arr[n] < min){
    min = arr[n];
  }
  
  return helperBoyan(arr,size,n+1,min);
}


//Atanas
int MinElem_Nasko(int arr[], size_t i)
{
	if(i == 1)
    {
        return arr[0];//return the 1st and only element
    }
    return min(arr[i - 1], MinElem_Nasko(arr + 1 , i - 1));
}

//Iliq
int minElementIliq(int arr[], int size)
{
    
    if(size == 1)
        return arr[0];
  
	return min(arr[size - 1], minElementIliq(arr + 1, size - 1));
}

//krisi
int minElement_krisi(int arr[], int size)
{
    if(size == 1)
    {
        return arr[0];
    }
    
    return ( min(arr[size-1] , minElement_krisi( arr+1 , size-1 ) ) );
}


//Deyan
int minElementDeyan(int array[], int size){
if(size==1){
return array[0];
}
    
return (min(array[size-1],minElementDeyan(array+1, size-1)));
}





//Niya
int minElementNiya (int arr[],int size){
    if (size==1)
    {
		return arr[0];
	}
	return (min(arr[size - 1], minElementNiya(arr + 1, size - 1)));
}



int main(){
  int arr[] = {2, 5, 6, 3};
  
  minElemBoyan(arr);
}