//write include statements
#include "hwexpressions.h"
#include <iostream>
//write namespace using statement for cout
using std::cout;
using std::endl;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout << "Enter the amount of the meal: ";
	cin >> meal_amount;

	cout << "Enter the tip rate: ";
	cin >> tip_rate;

	tax_amount = get_sales_tax_amount(meal_amount);

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "The total bill is: $" << total << endl;
	cout << "The total of the meal is: $" << meal_amount << endl;
	cout << "The total sales tax is: $" << tax_amount << endl;
	cout << "The total tip is: $" << tip_amount << endl;


	return 0;
}
