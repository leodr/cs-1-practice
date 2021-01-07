#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  char input[50];

  printf("\n> Enter a number:  ");
  scanf("%s", input);

  int length = 0;
  for (; input[length]; length++)
    ;

  int resultNumber = 0;
  int factor = 0;

  for (int i = 0; i < length; i++) {
    char numChar = input[length - i - 1];

    int num;

    switch (numChar) {
      case '0':
        num = 0;
        break;
      case '1':
        num = 1;
        break;
      case '2':
        num = 2;
        break;
      case '3':
        num = 3;
        break;
      case '4':
        num = 4;
        break;
      case '5':
        num = 5;
        break;
      case '6':
        num = 6;
        break;
      case '7':
        num = 7;
        break;
      case '8':
        num = 8;
        break;
      case '9':
        num = 9;
        break;
      default:
        num = -1;
    }

    if (num != -1) {
      resultNumber += num * pow(10, factor);
      factor++;
    }
  }

  printf("\nThe number you put in is: %d\n\n", resultNumber);

  return EXIT_SUCCESS;
}