/*
Write a program that has main() call a user-defined function that takes a distance in light years
as an argument and then returns the distance in astronomical units. The program should request the
light year value and display the result.

1 light year = 63,240 astronomical units (use the 'double' type)
*/

#include <iostream>
double lightYearConverter(double lightYears);

int main() {
	using namespace std;

	cout << "Enter the number of light years: ";
	double lightYears;
	cin >> lightYears;
	cout << lightYears << " light years = "
		<< lightYearConverter(lightYears) << " astronomical units";

	cin.get();
	cin.get();
	return 0;
}

double lightYearConverter(double lightYear) {
	return lightYear * 63240;
}