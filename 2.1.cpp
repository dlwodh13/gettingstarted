//practice program question 2.1
// A metric ton is 35273.92 ounces. Write a program that will read the weight of a package of
// package of breakfast cereal in ounces and output the weight in metric tons as well as the
// number of boxes needed to yield 1 metric ton of cereal.

#include <iostream>

using namespace std;

int main(){
	const double OunceInTons = 35273.92;
	double OuncesInbox;
	double weight;

	cout << "How many Ounces are in one box of cereal?\n";
	cin >> OuncesInbox;

	weight = (OuncesInbox/OuncesInbox);

	cout << "There are " << weight << "ton(s) of cereal in the box\n";
	cout << "You need " << (OunceInTons/weight) << "boxes for to be 1 ton of cereal\n";

	return 0;
}