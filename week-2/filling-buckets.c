#include <stdio.h>
#include <stdlib.h>

int main() {
  float xLiters, yLiters;
  int aPercent, bPercent, nTimes;

  printf("\nThe amount of liters in bucket X:                               ");
  scanf("%f", &xLiters);
  printf("The amount of liters in bucket Y:                               ");
  scanf("%f", &yLiters);
  printf("The percentage of water that goes into bucket Y each iteration: ");
  scanf("%d", &aPercent);
  printf("The percentage of water that goes into bucket X each iteration: ");
  scanf("%d", &bPercent);
  printf("The amount of swapping iterations:                              ");
  scanf("%d", &nTimes);

  printf("\n");

  for (int i = 0; i < nTimes; i++) {
    float litersIntoY = xLiters * aPercent / 100;
    xLiters -= litersIntoY;
    yLiters += litersIntoY;

    float litersIntoX = yLiters * bPercent / 100;
    yLiters -= litersIntoX;
    xLiters += litersIntoX;

    printf(
        "After %d times of swapping bucket X contains %f liters of water while "
        "bucket Y contains %f.\n",
        i + 1, xLiters, yLiters);
  }

  printf("\n");

  return EXIT_SUCCESS;
}