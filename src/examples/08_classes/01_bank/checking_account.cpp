//checking_account.cpp
#include "checking_account.h"

using std::cout;

void CheckingAccount::get_balance_from_db()
{
    balance = rand() % 1000 + 1;//value between 1 and 1000
}

void CheckingAccount::deposit(int amount)
{
    if(balance > 0)
    {
        balance += amount;
    }
}

void CheckingAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance += amount;
    }
}

//FREE FUNCTIONS; NOT A CLASS FUNCTION
void show_balance(const CheckingAccount &account)
{
    std::cout<<"Friend function: "<<account.balance<<"\n";
}

friend std::ostream& operator<<(std::ostream& out, const CheckingAccount &account)
{
    out<<"Operator overload: "8
}