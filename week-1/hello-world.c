#include <stdio.h>
#include <stdlib.h>

int main() {
  int z;
  int n;
  int a;
  int x;

  printf("Zu teilende Zahl: ");
  scanf("%d", &z);
  printf("Teiler: ");
  scanf("%d", &n);
  printf("Anzahl Nachkommastellen: ");
  scanf("%d", &a);
  x = z / n;
  printf("Ergebnis = %d.", x);

  for (; a > 0; a = a - 1) {
    z = 10 * (z - n * x);
    if (z == 0)
      break;
    x = z / n;
    printf("%d", x);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
