#include <iostream>
using namespace std;

int main() {
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here, take mine. ";
	carrots++;
	cout << "Now you have " << carrots << " carrots." << endl;
	cin.get();
	cin.get();

	return 0;
}