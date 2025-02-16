#include "logic.h"

int count(int num){

	int c = 0;

	while (num != 0) {
		num /= 10;
		c++;
	}

}

void round_change(int& num, int& pos) {

	int c = count(num);
	int p = pow(10, c - 1);

	for (int i = 0; i < pos; i++) {

		int dig = num % 10 * p;
		num /= 10;
		num += dig;

	}

}