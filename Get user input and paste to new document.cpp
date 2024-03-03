#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	char userinput[100];

	printf("Write something: ");
	scanf("%s", &userinput);

	FILE *file = fopen("goshadz.txt", "w");
	fprintf(file, ("%s", userinput));

	fclose(file);

	return 0;
}