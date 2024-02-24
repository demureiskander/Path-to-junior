	#include <stdio.h>

	int distance(int time, int speed);
	void printres(int res);

	int main() {
		distance(4, 9);
		return 0;
	}

	int distance(int time, int speed) {
		int res = time * speed;
		printres(res);
		return res;
	}

	void printres(int res) {
		res == 1 ?
			printf("Travel: 1 km \n") :
			printf("Travel: %d km\n", res);
	}
