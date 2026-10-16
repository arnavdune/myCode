#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>

int randNum(int min, int max);

int main() {
	printf("Welcome to addGame!\n\n");
	srand(time(NULL));
	for (int i=0; i<100; i++) {
		int userInput = get_int("%d> %d + %d = ", i, randNum(1,100), randNum(1,100));
	}
	return 0;
}

int randNum(int min, int max) {
	return ((rand() % (max - min + 1)) + min);
}
