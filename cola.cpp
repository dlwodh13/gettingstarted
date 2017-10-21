/*Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)

Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."
*/

#include <iostream>

using namespace std;

int main()
{
	int choose_numb;

	cout << "Choose a beverage by entering a number 1-5\n";
	cout << "---------------------------------------------\n";
	cout << "   1 : Coke\n";
	cout << "   2 : Water\n";
	cout << "   3 : Sprite\n";
	cout << "   4 : Ramune\n";
	cout << "   5 : Carupiko\n";
	cout << "---------------------------------------------\n";
	cin >> choose_numb;

	switch(choose_numb){
		case 1 : cout << "You picked Coke\n";
				break;
		case 2 : cout << "You picked water\n";
				break;
		case 3 : cout << "You picked Sprite\n";
				break;
		case 4 : cout << "You picked Ramune\n";
				break;
		case 5 : cout << "You picked Carupiko\n";
				break;
		default : cout << "Error. Choice was not valid, here is your money back!\n";
				break;
	}

}