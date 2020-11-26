#include <stdio.h>
#include <stdlib.h>

int main() {
  int arrayLength = 10;
  int numbers[arrayLength];

  printf("\n");

  for (int i = 0; i < arrayLength; i++) {
    printf("Enter number %d:  ", i + 1);
    scanf("%d", &numbers[i]);
  }

  printf("\n");

  for (int i = 0; i < arrayLength; i++) {
    for (int j = 0; j < arrayLength - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < arrayLength; i++) {
    printf("%d\n", numbers[i]);
  }

  printf("\n");

  return EXIT_SUCCESS;
}