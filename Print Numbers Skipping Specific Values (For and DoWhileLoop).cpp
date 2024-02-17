#include <stdio.h>

int main() {

//by using For
	for (int i = -7; i < 13; i += 3) {
		if (i != -1 && i != 5 && i != 11) {
			printf("%d\n", i);
		}
	}

	//you can delete this stroke 12 and 13
	printf("\n");

// The same, but by using DoWhile

	int i = -7;

	do {
		if (i != -1 && i != 5 && i != 11)
			printf("%d\n", i);
		i += 3;

	} while (i < 13);

	return 0;
}