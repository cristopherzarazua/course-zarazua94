//write include statements
#include <iostream>
#include "decisions.h"

using std::string;
using std::cout;
using std::cin;

int main() 
{
	int user_option = 0;
	cout<<"\nMAIN MENU\n\n1 - Letter grade using if\n";
	cout<<"2 - Letter grade using switch\n3 - Exit\n";
	cin>>user_option;

	int grade = 0;

	switch(user_option)
	{
		case 1:
			cout<<"Enter your grade: ";
			cin>>grade;
			cout<<"Your letter grade is: "<<get_letter_grade_using_if(grade)<<"\n";
			break;
		case 2:
			cout<<"Enter your grade: ";
			cin>>grade;
			cout<<"Your letter grade is: "<<get_letter_grade_using_switch(grade)<<"\n";
			break;
		case 3:
			cout<<"Goodbye"<<"\n";
			break;
		default:
			cout<<"Enter a valid option."<<"\n";
			break;

	}

	return 0;
}
