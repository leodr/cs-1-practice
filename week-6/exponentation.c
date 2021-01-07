#include <stdio.h>
#include <stdlib.h>

int powFn(int num, int exp) {
  if (exp == 0)
    return 1;

  int result = num;

  for (int i = 1; i < exp; i++) {
    result *= num;
  }

  return result;
}

int main() {
  int min, max, step;

  int p = 2;

  printf("\n> Enter the minimum value:  ");
  scanf("%d", &min);
  printf("> Enter the maximum value:  ");
  scanf("%d", &max);
  printf("> Enter the step width:     ");
  scanf("%d", &step);

  printf("\n");

  for (int i = min; i <= max; i += step) {
    int value = powFn(i, p);
    printf("%3d %10d\n", i, value);
  }

  printf("\n");

  return EXIT_SUCCESS;
}