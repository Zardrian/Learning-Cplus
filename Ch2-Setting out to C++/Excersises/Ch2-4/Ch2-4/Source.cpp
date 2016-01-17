/*
Write a program that asks the user to enter his or her age. The program should then display their age in months.
*/

#include <iostream>
int ageMonths(int age);

int main() {
	using namespace std;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	cout << "Your age in months is " << ageMonths(age);
	cin.get();
	cin.get();
	return 0;
}

int ageMonths(int age) {
	return age * 12;
}