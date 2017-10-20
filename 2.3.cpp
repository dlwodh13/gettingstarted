//practice question 2.3

//ex 6.5mph -> 9 minutes and 13.8 seconds per mile 

#include <iostream>

using namespace std;

int main()
{
	double mph;
	double minutes;
	double seconds;
	int int_minutes;

	cout << "What is the speed of the treadmile in (mph)?\n";
	cin >> mph;

	minutes = 60/mph;
	int_minutes = minutes;
	seconds = (minutes - int_minutes)*60; //need to multiply by 60 cause 0.2 min * 60 -> 1.2 seconds

	cout << "Coverting to minutes and seconds per miles....\n";
	cout << int_minutes << " minute(s) and " << seconds << " second(s)\n";

}
