#include <iostream>
#include <cstring>

enum TransactionType
{
    SEND,
    RECEIVE,
    WITHDRAW
};

struct BankAccount
{
    char ownerName[20];
    char iban[30];
    double amount;

    BankAccount()
    {
        strcpy(ownerName, "Ivan Ivanov");
        strcpy(iban, "BG404520EN32");
        amount = 500;
    }
};

void performTransaction(BankAccount& bankAccount, TransactionType transactionType, double sum )
{
    switch(transactionType)
    {
        case SEND: case WITHDRAW: bankAccount.amount -= sum; break;
        case RECEIVE: bankAccount.amount += sum; break;
    }

    std::cout << "Transaction successful. New amount is: " << bankAccount.amount << std::endl; 
}

int main()
{
    BankAccount ba;
    performTransaction(ba, SEND, 20);
    performTransaction(ba, RECEIVE, 30);
    performTransaction(ba, WITHDRAW, 100);
    return 0;
}