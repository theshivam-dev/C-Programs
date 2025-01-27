// number guessing game
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int userGuess, randomNumber = 0;
  printf("guess a integer number : ");
  scanf("%d", &userGuess);

  while (userGuess != randomNumber)
  {
    randomNumber = rand() % 10;
    printf("enter again you guess wrong number : ");
    scanf("%d", &userGuess);
  }
  printf("you win the game \n");
}
