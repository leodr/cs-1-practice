#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\na b c d r      ");
  printf("a b c d r      ");
  printf("a b c d r      ");
  printf("a b c d r\n\n");

  for (int a = 0; a <= 1; a++) {
    for (int b = 0; b <= 1; b++) {
      for (int c = 0; c <= 1; c++) {
        for (int d = 0; d <= 1; d++) {
          printf("%d %d %d %d %d      ", a, b, c, d, !(a && b) || (c || d));
          printf("%d %d %d %d %d      ", a, b, c, d, !(!(a && b) || c) && d);
          printf("%d %d %d %d %d      ", a, b, c, d,
                 !(!(!a || b)) || (c || !d));
          printf("%d %d %d %d %d\n", a, b, c, d, (a || !b) && !((a || c) && d));
        }
      }
    }
  }

  printf("\n");

  return EXIT_SUCCESS;
}