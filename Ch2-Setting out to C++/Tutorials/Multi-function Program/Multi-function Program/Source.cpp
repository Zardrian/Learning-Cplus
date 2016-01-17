#include <iostream>

int conversionStoneLb(int);

int main() {
	using namespace std;
	int stone;

	cout << "Please enter your weight in stone: ";
	cin >> stone;
	int pounds = conversionStoneLb(stone);
	cout << stone << " stone = " << pounds << " pounds. " << endl;
	cin.get();
	cin.get();
	return 0;
}

int conversionStoneLb(int sts) {
	return 14 * sts;
}