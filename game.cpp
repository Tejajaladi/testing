#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int randomNumber = rand() % 100;
  int guess;
  bool exit = false;

  printf("Enter your guess number: ");

  while (!exit)
  {
    scanf("%d", &guess);
    if (guess == randomNumber)
    {
      printf("you won the game");
      exit = true;
    }
    else if (guess < randomNumber)
    {
      printf("The number is less than random.");
    }
    else if (guess > randomNumber)
    {
      printf("The number is greater than random.");
    }
  }
}
