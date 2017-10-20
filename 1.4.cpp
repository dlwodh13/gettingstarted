//project 1.4
//if the user types the time in second
//it calculates the distance
// acc = 32 feet/second 

#include <iostream>

using namespace std;

int main(){
	const int acc = 32;
	double time;
	double distance;

	cout << "Type the length of the time(in seconds)\n";
	cin >> time;

	distance = (acc * time * time)/2;
	cout << "The total distance that ball travlled is " << distance << " feet\n";
	return 0;
}