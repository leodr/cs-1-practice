#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\n");

  float initialAmount;
  float interestRate;
  float goalAmount;

  printf("Initial amount: ");
  scanf("%f", &initialAmount);

  printf("Interest rate:  ");
  scanf("%f", &interestRate);

  printf("Goal amount:    ");
  scanf("%f", &goalAmount);

  int years;

  for (years = 0; initialAmount < goalAmount; years++) {
    initialAmount += initialAmount * interestRate / 100;
  }

  printf("\nIt would take %d years to reach your goal.\n\n", years);
}