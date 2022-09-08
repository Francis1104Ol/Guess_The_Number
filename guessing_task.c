#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*main_void - guessing game.*/
int main(void)
{
	int randomNumber = 0;
	int guess = 0;
	int numberOfGuesses;
	time_t t;

	srand((unsigned) time(&t));

	randomNumber = rand() % 16;

	printf("\nThis is a Guessing game.");
	printf("\nI have chosen a number between 0 and 15, which you must guess. \n");

	for (numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
	{
		printf("\nYou have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
		printf("\nEnter a guess: ");
		scanf("%d", &guess);

		if
			(guess == randomNumber);
		{
			printf("\nCongratulation you guessed it!\n");
			break;
		}
		else if (guess < 0 || guess > 15)
			printf("I said the number is between 0 and 15.\n");
		else if (randomNumber > guess)
			printf("Sorry, %d is wrong. my Number is greater than that.");
		else if (randomNumber < guess)
			printf("Sorry, %d is wrong. my Number is less than that.");
	}
	printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

	return (0);
}

