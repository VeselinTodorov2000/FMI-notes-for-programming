#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const int MAX_SIZE = 100;

int main()
{
    //task 0
    /*int n;
    cin >> n;
    int arr[MAX_SIZE];
    int indexFound = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int sumNext = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        sumNext = 0;
        for(int j = i+1; j < n; j++)
        {
            sumNext += arr[j];
        }

        if(sum == sumNext)
        {
            indexFound = i + 1;
            break;
        }
    }
    cout << indexFound << endl;*/

    //task 1
    /*
    char firstName[MAX_SIZE];
    cin >> firstName;

    int sum = 0;

    for(int i = 0; firstName[i] != '\0'; i++)
    {
        if('A' <= firstName[i] && firstName[i] <= 'Z')
        {
            firstName[i]+=32;
        }
    }

    for(int i = 0; firstName[i] != '\0'; i++)
    {
        if((firstName[i] - 'a' + 1) % 9 == 0)
        {
            sum += 9;   
        }
        else
        {
            sum += (firstName[i] - 'a' + 1) % 9;
        }
    }
    
    if(sum == 33)
    {
        cout << sum << endl;
    }
    else
    {
        while(sum >= 10)
        {
            int sumTemp = 0;
            while(sum)
            {
                sumTemp+=sum%10;
                sum/=10;
            }
            sum = sumTemp;
        }
        cout << sum << endl;
    }

    traicho
    1 2 3 4 5 6 7 8 9
    A B C D E F G H I
    J K L M N O P Q R
    S T U V W X Y Z
    */

    //task 3
    /*    
    char str[MAX_SIZE];

    cin.getline(str, MAX_SIZE);

    for(int i = 0; str[i]!='\0'; i++)
    {
        switch (str[i]){
            case '1': case '2': case '3':
                str[i] = 'i';
                break;
            case '4': case '5': case '6':
                str[i] = 'e';
                break;
            case '7': case '8': case '9':
                str[i] = 'u';
                break;
        }

        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A' + 1;
        }
    }

    cout << str << endl;
    */
    
    //task 4
    /*char sequence[MAX_SIZE];
    cin.getline(sequence, MAX_SIZE);
    int foundNumbers = 0;
    int numbers[MAX_SIZE];
    for(int i = 0; sequence[i] != '\0'; i++)
    {
        if('0' <= sequence[i] && sequence[i] <= '9')
        {
            foundNumbers++;                       
            int currentNum = sequence[i] - '0';
            i++;
            while(!(sequence[i] < '0' || '9' < sequence[i]))
            {
                currentNum *= 10;
                currentNum += sequence[i] - '0';
                i++;
            }

            numbers[foundNumbers-1] = currentNum;        
        }
    }

    int finalSequence[MAX_SIZE];
    int length = 0;
    for(int i = 0; i < foundNumbers; i++)
    {
        //2 8 4 30 3 9 7 2 7 8
        //2 2 4 30 
        if(numbers[i] == 3 && numbers[i+1] == 9 && numbers[i+2] == 7)
        {
            finalSequence[length++] = 6;
            finalSequence[length++] = 8;
            i+=2;
            continue;
        }
        
        if(numbers[i] == 8 && (i+1 != foundNumbers))
        {
            finalSequence[length++] = 8 / numbers[i+1];
            continue;
        }
        
        if(numbers[i] == 8 && (i+1 == foundNumbers))
        {
            finalSequence[length++] = 8 / numbers[0];
            continue;
        }
        
        finalSequence[length++] = numbers[i];
    }

    for(int i = 0; i < length; i++)
    {
        cout << finalSequence[i] << " ";
    }
    cout << endl;*/
    return 0;
}
















