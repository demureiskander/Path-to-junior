#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>

int main() {
	char strings[255];

	FILE *file = fopen("maindemfile.txt", "a");
	fprintf(file, "Hello world!\n");
	fprintf(file, "Whatsup?\n");
	fprintf(file, "Something\n");
	fprintf(file, "12345\n");

	fclose(file);

	FILE *filer = fopen("maindemfile.txt", "r");

	for (int i = 0; i < 4; i++) {
		fgets(strings, 255, filer);
		printf("%s", strings);
	}

	fclose(filer);

	return 0;
}