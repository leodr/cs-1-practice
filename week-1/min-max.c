#include <stdio.h>
#include <stdlib.h>

int main() {
  int min = 0;
  int max = 0;
  int count;

  printf("\nCount: ");
  scanf("%d", &count);

  printf("\n");

  for (int i = 0; i < count; i++) {
    int input;

    printf("%d. number: ", i + 1);
    scanf("%d", &input);

    if (i == 0) {
      min = input, max = input;
    } else {
      if (input < min)
        min = input;
      if (input > max)
        max = input;
    }
  }

  printf("\n");
  printf("Maximum number: %d\n", max);
  printf("Minimum number: %d\n\n", min);

  return EXIT_SUCCESS;
}