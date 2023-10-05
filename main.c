#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input;
  
  printf("input a number: ");
  scanf("%d", &input);
  
  if (input < 0)
      input = -input;
      
  printf("Absolute value is %d\n", input);
  
  system("PAUSE");	
  return 0;
}
