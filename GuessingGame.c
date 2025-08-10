#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	
	int randomNumber = rand() % 101;
	
	int guess;
	
	int guessCount;
	
	while(1)
	{
		printf("Enter Your Guess: ");
		
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
		else if(randomNumber = guess)
		{
			printf("Congratulations You Won...\n");
			
			printf("You took %d guesses\n",guessCount);
			
			break;
		}

	}

	return 0;
}
