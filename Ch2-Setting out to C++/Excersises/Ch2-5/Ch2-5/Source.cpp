/*
Write a program thathas main() call a user-defined function that takes a Calsius temperature
value as an argument and then returns the equivalent Farenheit value. The program should
request the calsius value from the user and display the result.
*/

#include <iostream>
int farenheitConvert(int celsius);

int main() {
	using namespace std;
	cout << "Please enter a calsius value: ";
	int celsius;
	cin >> celsius;
	cout << celsius << " degrees celsius is "
		<< farenheitConvert(celsius) << " degrees farenheit.";
	cin.get();
	cin.get();
	return 0;
}

int farenheitConvert(int celsius) {
	return 1.8 * celsius + 32;
}