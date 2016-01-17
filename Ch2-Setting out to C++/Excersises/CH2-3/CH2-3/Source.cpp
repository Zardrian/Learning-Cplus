/*
Write a C++ program that uses three user-defined functions (main() counts as one) that produces the following output:
	Three blind mice
	Three blind mice
	See how they run
	See how they run
*/

#include <iostream>

void blindMice(void);
void miceRun(void);

using namespace std;

int main() {
	blindMice();
	blindMice();
	miceRun();
	miceRun();
	cin.get();
	cin.get();
	return 0;
}

void blindMice() {
	cout << "Three blind mice" << endl;
}

void miceRun() {
	cout << "See how they run" << endl;
}