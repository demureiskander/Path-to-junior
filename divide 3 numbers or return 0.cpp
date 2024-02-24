#include <stdio.h>

float dividef(float a, float b, float c);

int main() {
	float result = dividef(300, 7, 2);
	printf("%.2f", result);

	return 0;
}

float dividef(float a, float b, float c) {
	if (a == 0 || b == 0 || c == 0) {
		return 0;
	}
	else {
		float res = a / b / c;
		return res;
	}
	
}