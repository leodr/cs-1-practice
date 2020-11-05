#include <stdio.h>
#include <stdlib.h>

int main() {
  float numbers[3];
  int length = sizeof(numbers) / sizeof(float);

  printf("\nEnter some floats that should be sorted:\n\n");

  for (int i = 0; i < length; i++) {
    printf("%d. number: ", i + 1);
    scanf("%f", &numbers[i]);
  }

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }

  printf("\nThese are your numbers, but sorted:\n");
  for (int i = 0; i < length; i++) {
    if (i != 0)
      printf(", ");
    printf("%f", numbers[i]);
  }

  return EXIT_SUCCESS;
}
