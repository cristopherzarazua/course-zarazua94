//add include statements
#include "dna.h"
#include<iostream>
//add function(s) code here
using std::cout;
using std::cin;

int factorial(int num)
{
    auto sum = 1; 
    while(num > 0)
    {
        sum = num * num;
        num --;
    }

    return sum;
}

int gcd(int num1, int num2)//greatest common divisor
{
    auto GCD = 0;
    while(num1 != num2)
    {
        if(num1 > num2)
        {
            num1 -= num2;
        }
        else if(num1>num2)
        {
            num2 -= num1;
        }
    }
    GCD = num1;
    return GCD;
}

void main_menu()
{
    int user_selection = 0;
    do
    {
        cout<<"\n";
        cout<<"\nMain Menu\n";
        cout<<"\n1-Factorial\n";
        cout<<"\n2-Greatest Common Divisor\n";
        cout<<"\n3-Exit\n";
        cin>>user_selection;

        auto user_selection = 0;
        auto num =0;
        auto num1 =0;
        auto num2 =0;
        auto exit = 'n';

        switch(user_selection)
        {
            case 1:
			       cout<<"\nPlease enter a number: ";
			       cin>>num;
			       cout<<"\nThe factorial of "<<num<<" is "<<factorial(num);
			       break;
		    case 2:
			       cout<<"\nPlease enter first number: ";
			       cin>>num1;
                   cout<<"\nPlease enter second number: ";
                   cin>>num2;
			       cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd(num1, num2);
			       break;
		    case 3:
			       cout<<"Are you sure you want to quit? Type 'y' to exit: ";
                   cin>>exit;
            if(exit == 'y' || exit == 'Y')
            {
                user_selection = 3;
            }
            else
            {
                user_selection = 1;
            }

            break;

        }
    }
     while(user_selection == 1 || user_selection == 2);

}
