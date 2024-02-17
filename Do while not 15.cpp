#include <stdio.h>

int main() {
	int usernum;

	do {
		printf("Write number 15: ");
		scanf_s("%d", &usernum);
	} while (usernum != 15);

	printf("Yeah, u did it!\n");

	return 0;
}