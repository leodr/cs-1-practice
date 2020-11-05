#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\n");

  for (int currentNumber = 100; currentNumber < 1000; currentNumber++) {
    int firstDigit = currentNumber / 100;
    int secondDigit = currentNumber / 10 % 10;
    int thirdDigit = currentNumber % 10;

    if (firstDigit + secondDigit * secondDigit +
            thirdDigit * thirdDigit * thirdDigit ==
        currentNumber) {
      printf("%d\n", currentNumber);
    }
  }

  printf("\n");

  return EXIT_SUCCESS;
}