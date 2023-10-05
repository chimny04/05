#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer = 108;
  int num;
  int trial = 0;
  
  do
  {
      printf("guess the number: ");
      scanf("%d", &num);
      
      if (num < answer)
          printf("Low!\n");
      else if (num > answer)
          printf("Up!\n");
      
      trial = trial + 1;
  }
  while (num != answer);
  
  printf("Congratulation! Trials: %d\n", trial);
  
  system("PAUSE");	
  return 0;
}
