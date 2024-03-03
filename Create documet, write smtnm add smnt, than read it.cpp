#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	FILE* file = fopen("testfile.txt", "w");
	fprintf(file, "Hello world!\n");
	fclose(file);

	file = fopen("testfile.txt", "a");
	fprintf(file, "What's up?\n");
	fclose(file);

	char readfile[100];
	file = fopen("testfile.txt", "r");
	fgets(readfile, 100, file);
	printf("%s", readfile);
	fgets(readfile, 100, file);
	printf("%s", readfile);
	fclose(file);

	return 0;
}