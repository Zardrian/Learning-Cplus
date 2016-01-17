/*
Write a C++ program that asks for a distance in furlongs and converts it into yards
(one furlong is 220 yards)
*/

#include <iostream>

int main() {
	using namespace std;

	cout << "Please give  me a distance (in furlongs): ";
	int furlongDistance;
	cin >> furlongDistance;
	int yardDistance = furlongDistance * 220;
	cout << "That is " << yardDistance << " yards!";
	cin.get();
	cin.get();

	return 0;
}