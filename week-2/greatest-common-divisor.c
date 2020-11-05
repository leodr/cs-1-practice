#include <stdio.h>
#include <stdlib.h>

int main() {
  int firstNum, secondNum;

  printf("\nEnter the first number:  ");
  scanf("%d", &firstNum);
  printf("Enter the second number: ");
  scanf("%d", &secondNum);

  printf("\n");

  int biggerNumber;
  int smallerNumber;

  if (firstNum > secondNum) {
    biggerNumber = firstNum;
    smallerNumber = secondNum;
  } else if (secondNum > firstNum) {
    biggerNumber = secondNum;
    smallerNumber = firstNum;
  } else {
    printf(
        "The two numbers are equal, therefore the greatest common divisor is "
        "the number itself, %d.\n\n",
        firstNum);
    return EXIT_SUCCESS;
  }

  while (biggerNumber != smallerNumber) {
    if (smallerNumber > biggerNumber) {
      int temp = biggerNumber;
      biggerNumber = smallerNumber;
      smallerNumber = temp;
    }

    biggerNumber -= smallerNumber;
  }

  printf("The greatest common divisor is %d.\n\n", biggerNumber);

  return EXIT_SUCCESS;
}