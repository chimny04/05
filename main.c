#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input;
  
  printf("input a number: ");
  scanf("%d", &input);
  
  if (input > 0)
      printf("This is positive\n");
  else if (input == 0)
      printf("This is 0\n");
  else
      printf("This is negative\n");
  
  system("PAUSE");	
  return 0;
}
