#include <stdio.h>

int main() {
	int mas[] = {10,11,12,13,14,15,16,17,18,19,20};

	for (int i = 0; i < 10; i++) {
		printf("%d\n", mas[i] * mas[i]);
	}

	return 0;
}