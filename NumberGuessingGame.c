/*
	A basic game in which the rand() function generates a random number and the user has to guess it.
	this code will help you practice:
	1. rand() function use
	2. loops
	3. break statement
	4. and some very useful header files
*/




#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL)); //seeding the pseudo random number generator
	
	int randomNumber = rand() % 101; //making sure that the random number is below 100(easy for the user to guess the number)
	
	int guess;
	
	int guessCount=0;
	
	while(1)				//running a infinite loop till the user guesses the number correctly
	{
		printf("Enter Your Guess(0-100): ");
		
		scanf("%d",&guess);

		guessCount++;
	
		if(guess < randomNumber)
		{
			printf("Try A Higher Number\n");
		}
		else if(guess > randomNumber)
		{
			printf("Try A Lower Number\n");
		}
		else if(randomNumber == guess)
		{
			printf("Congratulations You Won...\n");
			
			printf("You took %d guesses\n",guessCount);
			
			break; //the loop will end when the user guesses the number correctly
		}

	}

	return 0;
}
/* You can use a "do while" loop too as the program has to run atleast once,
	but I used "while" loop just because i am comfortable with it.
*/

