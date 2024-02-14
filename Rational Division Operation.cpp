#include <stdio.h>

int main() {
	float n1, n2, result;

	printf("Print number n1: ");
	scanf_s("%f\n", &n1);

	printf_s("Print number n2: ");
	scanf_s("%f", &n2);

	result = n2 == 0 ? 1 : (n1 / n2);
	printf("Result: %f\n", &result);

	return 0;
}