//pg37 project 1.3 
//write a program that calculates how many cents are there
//if the user inputs the number of quarters,dimes, and nickles?

#include <iostream>
#include "cmpt_error.h"

using namespace std;

int main()
{
 int number_quarters = 0;//25 cents
 int number_dimes = 0;//10 cents
 int number_nickles = 0;//5 cents

 cout << "How many quarters?\n";
 cin >> number_quarters;
 cout << "How many dimes?\n";
 cin >> number_dimes;
 cout << "How many nickles?\n";
 cin >> number_nickles;

 double total_amount;
 total_amount = 25*number_quarters + 10*number_dimes + 5*number_nickles;
 cout << "The total amount is " << total_amount << " cent\n";
}