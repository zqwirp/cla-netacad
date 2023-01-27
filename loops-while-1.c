#include <stdio.h>

/*
   Write a program that takes two integer numbers and prints their sum. Do this until the user enters 0 (zero) (but print the last sum).
   Additionally, if the user inputs 99 as the first number and 0 as the second number, just print Finish., and end the program.
   Use the while loop in your code.
   Your version of the program must print the same result as the expected output.
   */

int main() {
  short a, b, sum;

  do {
    printf("\n");
    printf("a = ", a);
    scanf("%d", &a);

    printf("b = ", b);
    scanf("%d", &b);

    if (a == 0 || b == 0)
      break;

    sum = a + b;
    printf("\n");
    printf("sum = %d\n", sum);
  } while (a != 0 && b != 0);

  printf("\n");
  printf("\nprogram stopped\n");
  printf("last sum = %d\n", sum);

  return 0;
}

