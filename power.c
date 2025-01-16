#include <stdio.h>

long power(int base, unsigned int n);

int main() {
	for (int x = 1; x <= 10; x++) {
		long answer = power(2, x);
		printf("2 to the power of %d is %ld\n", x, answer);
	}
	return 0;
}

long power(int base, unsigned int n) {
	long answer = 1;
	for (int i = 0; i < n; i++) {
		answer *= base;
	}
	return answer;
}
