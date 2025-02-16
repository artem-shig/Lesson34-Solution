#include "logic.h"

int main() {

	int num;

	cout << "Enter your number: ";
	cin >> num;

	int pos;

	cout << "Enter pos: ";
	cin >> pos;

	round_change(num, pos);

	cout << "Result: " << num << endl;

	return 0;
}