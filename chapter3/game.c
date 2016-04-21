/* Write a program for a matchstick game being played between the computer and user 
Your program should ensure that computer always wins 
Rules for the game are as follows
1) There are 21 matchsticks
2) The computer asks player to pick 1, 2, 3 or 4 matchsticks
3) after the person picks the computer does its picking
4) Whoever is forced to pick last matchstick losses the game
*/

#include <stdio.h>

int main(void)
{
	int matchstick = 21 , number;
	while(matchstick > 1)
	{
		printf("enter how many sticks to pick:");
		scanf("%d", &number);

		matchstick = matchstick - number;
	}	
}

  
