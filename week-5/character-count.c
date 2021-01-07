#include <stdio.h>
#include <stdlib.h>

int main() {
  char input[50];
  char character;

  printf("\nString to count characters in:  ");
  scanf("%s", input);

  printf("Character to count:             ");
  scanf(" %c", &character);

  int count = 0;

  for (int i = 0; input[i]; i++) {
    if (input[i] == character) {
      count++;
    }
  }

  printf("\n\"%c\" appears %d times in \"%s\".\n\n", character, count, input);

  return EXIT_SUCCESS;
}