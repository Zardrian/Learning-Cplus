/*
Write a program that asks the user to enter an hour value and a minute value. The main()
function should then pass these two values to a type 'void' function that displays the
two values in a clock format
*/

#include <iostream>;
void clockFormatter(int hour, int minute);
using namespace std;

int main() {
	cout << "Please enter a number of hours: ";
	int hour;
	cin >> hour;
	cout << "Please enter a number of minutes: ";
	int minutes;
	cin >> minutes;
	clockFormatter(hour, minutes);
	cin.get();
	cin.get();
	return 0;
}

void clockFormatter(int hour, int minute) {
	cout << "Time: " << hour << ":" << minute;
}