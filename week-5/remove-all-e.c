#include <stdio.h>
#include <stdlib.h>

int main() {
  char string[50] = "Remove all 'e's out of this string.";

  for (int i = 0; string[i]; i++) {
    if (string[i] == 'e') {
      for (int j = i; string[j]; j++) {
        string[j] = string[j + 1];
      }
    }
  }

  printf("\nThe string without the character 'e' is \"%s\".\n\n", string);

  return EXIT_SUCCESS;
}