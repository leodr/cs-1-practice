#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  printf("\nEnter a natural number: ");
  scanf("%d", &number);
  printf("\n");

  int initialNumber = number;

  int current = 2;
  int i = 0;

  for (int current = 2; number != 1; current++, i++) {
    if (number % current == 0) {
      if (i == 0) {
        printf("%d", current);
      } else {
        printf(" * %d", current);
      }

      number /= current;

      // Start at 2, but `current` will be increased after the function
      current = 1;
    }
  }

  printf(" = %d\n\n", initialNumber);

  return EXIT_SUCCESS;
}