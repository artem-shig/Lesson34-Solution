#include <iostream>
using namespace std;

void change(int* num) {

	*num *= 10;
}

int main() {

	int x = 100;

	cout << "Before x =  " << x << endl;

	change(&x);

	cout << "After x = " << x << endl;

	return 0;
}