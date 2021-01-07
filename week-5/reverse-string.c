#include <stdio.h>
#include <stdlib.h>

int main() {
  char string[50];

  printf("\n> Enter a string to be reversed:  ");
  scanf("%s", string);

  int stringLength;

  for (stringLength = 0; string[stringLength]; stringLength++)
    ;

  for (int i = 0; i < stringLength / 2; i++) {
    char temp = string[i];
    string[i] = string[stringLength - i - 1];
    string[stringLength - i - 1] = temp;
  }

  printf("\nThe reversed string is: \"%s\".\n\n", string);

  return EXIT_SUCCESS;
}