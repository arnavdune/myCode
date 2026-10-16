#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum(int min, int max);

int main() {
	printf("Welcome to addGame!\n\n");
	srand(time(NULL));
	printf("Random number: %d\n", randNum(1, 100));
	return 0;
}

int randNum(int min, int max) {
	return ((rand() % (max - min + 1)) + min);
}
