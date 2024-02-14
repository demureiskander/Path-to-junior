#include <stdio.h>

int main() {
	float n1, n2, res;
	char mathop;

	printf("please write first number: ");
	scanf_s("%f", &n1);
	printf("please write second number: ");
	scanf_s("%f", &n2);
	printf("please chose any math operation (+,-,*,/): ");
	scanf_s(" %c", &mathop);

	switch (mathop) {
		case '+':
			res = n1 + n2;
			break;
		case '-':
			res = n1 - n2;
			break;
		case '*':
			res = n1 * n2;
			break;
		case '/':
			res = n1 / n2;
			break;
	}	

	printf("%.2f", res);

	return 0;
}