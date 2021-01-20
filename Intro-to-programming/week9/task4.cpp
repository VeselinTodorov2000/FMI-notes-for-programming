#include<iostream>

//Напишете функция, която приема число в десетична бройна система и връща числото в двоична бройна система
//Вход 5
//Изход 101

int toBinary(int n)
{
    if(n <= 1)
    {
        return n;
    }
    return (n%2) + 10*toBinary(n/2);
}
//5
//1+10*(0+10*(1)) = 1+10*(10*1)=101

//Deyan;
int toBinaryDeyan(int n){
if(n<=1){
	return n;
}
int remaining = n % 2;
return remaining + 10 * toBinaryDeyan(n/2);
}





//BOYAN
int binaryBoyan(int n){

}




//atanas
int BinaryNasko(int n) //Вход 5
                       // 5%2 == 1 
                       //Изход 10 1
                       // n%2 + 10 !!?? and if n s poveche ot 1 cifra mu pravim n/2??
{
    if (n == 0)
    {
        return 0;
    }
    return (n%2 + 10 * BinaryNasko(n/2));

}


//krisi
int binaryKrisi(int n)
{
    if( n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    } 
    return( n%2 + binaryKrisi(n/2)*10 );
}

//Niya







//Iliq
int binaryIliq(int n)
{
    if(n == 0)
		return 0;
    if(n == 1)
        return 1;
    else
        return (n % 2 + 10 * binaryIliq(n/2));

}







//Peshko
//Трябва ти само числото, което ще преобразуваш в 10-тична


int main()
{
    return 0;
}