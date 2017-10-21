/*Requires:
 *variables, data types, and numerical operators
 *basic input/output
 *logic (if statements, switch statements)

 *Write a program that allows the user to enter the grade scored in a programming class (0-100).
 *If the user scored a 100 then notify the user that they got a perfect score.

 *Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

 *★★ Modify the program so that it will notify the user of their letter grade
 *   -59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/

#include <iostream>

using namespace std;

int main()
{
	double mark;
	cout << "What did you get on your test?\n";
	cin >> mark;

	if(mark >= 90 && mark <= 100){
		char letter_grade = 'A';
		cout << "You got an " << letter_grade << " on your test!\n";
	}else if(mark >= 80 && mark <= 89){
		char letter_grade = 'B';
		cout << "You got a " << letter_grade << " on your test!\n";
	}else if(mark >= 70 && mark <= 79){
		char letter_grade = 'C';
		cout << "You got a " << letter_grade << " on your test!\n";
	}else if(mark >= 60 && mark <= 69){
		char letter_grade = 'D';
		cout << "You got a " << letter_grade << " on your test!\n";
	}else{
		char letter_grade = 'F';
		cout << "You got a " << letter_grade << " on your test\n";
	}
}
