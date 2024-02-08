#include <stdio.h>
#include <stdlib.h>

int main() {
	char first_letter;
	unsigned short age;
	float height;

	printf("Write the first letter of your name: ");
	scanf_s("%c", &first_letter);
	
	printf("Write your age: ");
	scanf_s("%d", &age);
	
	printf("Write your height: ");
	scanf_s("%f", &height);

	printf("The first letter of your name: %c | your age: %d | your height: %.2f \n", first_letter, age, height);

	return 0;
}