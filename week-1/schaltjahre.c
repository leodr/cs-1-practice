#include <stdio.h>
#include <stdlib.h>

int main() {
  int year;

  printf("Enter a year:\n");
  scanf("%d", &year);

  if (year % 400 == 0) {
    printf("This year is a leapyear.");
  } else if (year % 100 == 0 || year % 4 != 0) {
    printf("This year is not a leapyear.");
  } else {
    printf("This year is a leapyear.");
  }

  return EXIT_SUCCESS;
}
