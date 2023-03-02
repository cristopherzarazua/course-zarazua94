#include<iostream>
#include<time.h>
#include "checking_account.h"
#include "atm.h"


using std::cout;

int main()
{
	srand(time(NULL));//genereate true randoms on each main run execution

	CheckingAccount account;//cust 1
	cout<<account;
	cout<<account.get_balance()<<"\n";
	show_balance(account);//use the firend free function

	//run_menu(acount);

	cout<<account.get_balance()<<"\n";

	return 0;
}