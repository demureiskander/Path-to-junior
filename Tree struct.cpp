#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Tree {
	int height;
	char name[20];
	int age;
	int width;
};

int main() {

	struct Tree Cedar;
	Cedar.height = 100;
	strcpy(Cedar.name, "Cedar");
	Cedar.age = 20;
	Cedar.width = 15;

	struct Tree Cherry;
	Cherry.height = 50;
	strcpy(Cherry.name, "Cherry");
	Cherry.age = 5;
	Cherry.width = 10;

	struct Tree Ficus = {300, "Ficus", 7, 100};
	struct Tree Ficus2 = {500, "Ficus2", 10, 400};

	printf("Age of %s tree: %d\n", Cherry.name, Cherry.age);
	printf("Width of %s tree: %d\n", Cedar.name, Cedar.width);

	return 0;
}