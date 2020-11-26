#include <stdio.h>
#include <stdlib.h>

int main() {
  int arrayLength = 10;
  int numbers[arrayLength];

  printf("\n");

  for (int i = 0; i < arrayLength; i++) {
    printf("Enter the %d. number:  ", i + 1);
    scanf("%d", &numbers[i]);
  }

  printf("\n");

  int wantedIndex;

  while (1) {
    printf("Which number do you want to see?  ");
    scanf("%d", &wantedIndex);

    // Account for the user typing in 9 for getting the number with index 8
    wantedIndex -= 1;

    if (wantedIndex > 0 && wantedIndex <= arrayLength) {
      printf("The %d. number is %d.\n\n", wantedIndex + 1,
             numbers[wantedIndex]);
    } else {
      printf("That index is out of bounds.\n");
      break;
    }
  }

  printf("\n");

  return EXIT_SUCCESS;
}