#include <stdio.h>

struct proportion {
	int width, height;
};

void multiply(struct proportion *sizes);

int main() {
	struct proportion sizes = {5, 7};
	multiply(&sizes);

	return 0;
}

void multiply(struct proportion *sizes) {
	int res = sizes->width * sizes->height;
	printf("Result of multiply: %d\n", res);
}