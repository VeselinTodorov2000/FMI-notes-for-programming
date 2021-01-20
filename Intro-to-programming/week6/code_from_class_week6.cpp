#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;

const int MAX_SIZE = 100;

int main()
{

    //for every task
    /*int matrix[MAX_SIZE][MAX_SIZE];
    int row, col;
    cin >> row >> col;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }*/

    //task 1
    /*for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            matrix[i][j]+=10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/

    //task 2
    /*int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
                continue;
            }
            if(min > matrix[i][j])
            {
                min = matrix[i][j];
            }
        }
    }
    cout << "Minimal element is " << min << endl;
    cout << "Maximum element is " << max << endl;*/

    //task 3

    //sum of row
    /*int sum = 0;
    for(int i = 0; i < row; i++)
    {
        sum = 0;
        for(int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i << " is " << sum << endl;
    }*/

    //sum of col
    /*int sum = 0;
    for(int i = 0; i < col; i++)
    {
        sum = 0;
        for(int j = 0; j < row; j++)
        {
            sum += matrix[j][i];
        }
        cout << "Sum of col " << i << " is " << sum << endl;
    }*/

    //sum of diagonal
    /*int sum = 0;
    for(int i = 0; i < row; i++)
    {
        sum += matrix[i][i];
    }
    cout << "Sum of main diagonal is " << sum << endl;*/

    //sum of second diagonal
    /*int sum = 0;
    for(int i = 0; i < row; i++)
    {
        cout << i << " " << row - i - 1 << endl;
        sum += matrix[i][row - i - 1];
    }
    cout << sum;*/

    //2nd solution
    /*int sum = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(row == i + j + 1)
            {
                sum += matrix[i][j];
            }
        }
    }
    cout << sum << endl;*/

    //task 4
    /*int x;
    cin >> x;
    bool found = false;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] == x)
            {
                matrix[i][j]*=10;
                cout << matrix[i][j] << endl;
                cout << i*col + j << endl;
                found = true;
            }
        }
    }
    if(!found)
    {
        cout << "404 Not found" << endl;
    }*/

    //task 5
    /*char sentence[MAX_SIZE], symbol;
    cin.getline(sentence, MAX_SIZE);
    cin >> symbol;
    size_t counter = 0;
    for(int i = 0; sentence[i] != '\0'; ++i)
    {
        if(sentence[i] == symbol)
        {
            counter++;
            sentence[i] = '*';
        }
    }
    cout << counter << endl;
    cout << sentence << endl;*/

    //task 6
    /*char sentence[MAX_SIZE];
    cin.getline(sentence, MAX_SIZE);
    size_t cnt = 0;
    //char minWord[MAX_SIZE];
    //char maxWord[MAX_SIZE];
    //char currentWord[MAX_SIZE];
    if(sentence[0] == '.' || sentence[0] == '!' || sentence[0] == '?')
    {
        cout << 0 << endl;
        return 0;
    }
    for(size_t i = 0; sentence[i] != '.' && sentence[i] != '!' && sentence[i] != '?'; i++)
    {

        if(sentence[i]== ' ')
        {
            cnt++;
        }
    }
    cout << ++cnt << endl;*/

    //task 7
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    size_t n;
    cin >> n;
    cout << "A = " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "B = " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "----------------" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << 2*A[i][j] + 3*B[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}