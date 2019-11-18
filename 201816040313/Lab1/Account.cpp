
// Lab 1: Account.cpp
// Member-function definitions for class Account.
#include <iostream>
using namespace std;

#include "Account.h" // include definition of class Account

// Account constructor initializes data member balance
Account::Account( int initialBalance )
{
   balance = 0; // assume that the balance begins at 0

   // if initialBalance is greater than 0, set this value as the
   // balance of the Account; otherwise, balance remains 0
   if ( initialBalance > 0 )
      balance = initialBalance;

   // if initialBalance is negative, print error message
   if ( initialBalance < 0 )
      cout << "Error: Initial balance cannot be negative.\n" << endl;
} // end Account constructor

// credit (add) an amount to the account balance
void Account::credit( int amount )
{
   balance = balance + amount; // add amount to balance
} // end function credit


// return the account balance
int Account::debit(int moneyget)//take amount to blance
{


    if(balance<moneyget)
    {
        cout << "Debit amount exceeds account balance.\n" << endl;
        return balance;

    }
    if(balance>=moneyget)
    {
        balance=balance-moneyget;
        return balance;
    }

}
int Account::getBalance()
{
   return balance; // gives the value of balance to the calling function
} // end function getBalance

