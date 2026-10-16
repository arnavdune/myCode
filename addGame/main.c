#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>



int randNum(int min, int max);

int main() {
	printf("Welcome to addGame!\n\n");
	srand(time(NULL));

	int min = get_int("Min: ");
	int max = get_int("Max: ");
	int total_rounds = get_int("Tatal rounds: ");

	int score = 0;

	for (int i=0; i<total_rounds; i++) {
		int num1 = randNum(min, max);
		int num2 = randNum(min, max);
		int userInput = get_int("%d> %d + %d = ", i+1, num1, num2);
		if (userInput == num1 + num2) {
			printf("Correct!\n");
			score++;
		}
		else {
			printf("Incorrect! Answer: %d\n", num1 + num2);
		}
	}
	printf("Game over! Your score: %d\n", score);
	return 0;
}

int randNum(int min, int max) {
	return ((rand() % (max - min + 1)) + min);
}
