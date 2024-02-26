#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


struct pc {
	char cpu[40];
	float weight;
	int worktime;
	int manycores;
	char nameos[50];
};


int main() {
	struct pc Windows = {"Dual Core CPU", 15.4f, 700, 4, "Windows"};
	printf("CPU type: %s\nWeight of PC: %f kg\nTime of Work: %d min\nNumber of cores: %d\nName of OC: %s\n", Windows.cpu, Windows.weight, Windows.worktime, Windows.manycores, Windows.nameos);

	return 0;
}