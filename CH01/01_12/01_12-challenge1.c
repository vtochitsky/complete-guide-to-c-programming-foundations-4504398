#include <stdio.h>
#include <stdlib.h>

/* main program */
int main(void)
{
  /* initialization */
  int i = 0;
  int result = 0;

  /* initial message */
  puts("Let's go!");

  /* main program loop */
  for (; i < 10; i++)
    result++;

  /* output results */
  printf("Result is %d\n", result);

  return 0;
}
