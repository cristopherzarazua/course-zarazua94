//write include statement for decisions header
#include "decisions.h"
#include <iostream>

std::string get_letter_grade_using_if(int grade)
{
    std::string result;

//Write code for function(s) code here
if (grade <=100 && grade >= 90)
    {
        result = "A";
    }
    else if (grade < 90 && grade >= 80)
    {
        result = "B";
    }
    else if (grade < 80 && grade >= 70)
    {
        result = "C";
    }
    else if (grade < 70 && grade >= 60)
    {
        result = "D";
    }
    else if (grade < 60 && grade >= 0)
    {
        result = "F";
    }
    else
    {
        result = "Enter a valid grade: ";
    }
    return result;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string result;

    switch (grade)
    {
    case 90 ... 100:
        result = "A";
        break;
    case 80 ... 89:
        result = "B";
        break;
    case 70 ... 79:
        result = "C";
        break;
    case 60 ... 69:
        result = "D";
        break;
    case 0 ... 59:
        result = "F";
        break;
    default:
        result = "Enter a valid grade: ";
        break;
    }

    return result;
}

void display_menu() 
{
    std::cout<<"\n";
	std::cout<<"       MAIN MENU       "<<"\n\n";
	std::cout<<"1-Letter grade using if"<<"\n";
	std::cout<<"2-Letter grade using switch"<<"\n";
	std::cout<<"3-Exit"<<"\n\n";
}