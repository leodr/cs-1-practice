#include <stdio.h>
#include <stdlib.h>

int main() {
  int totalYears;

  printf("\nHow many years do you want to look into the future?  ");
  scanf("%d", &totalYears);

  printf("\n");

  int totalPositions = 1200;

  int studiendirektoren = 40;
  int oberstudienraete = 160;
  int studienraete = 1000;

  float oberstudienraetePromotionPercentage = 0.1;
  float studienraetePromotionPercentage = 0.2;
  float pensionPercentage = 0.2;

  for (int years = 3; years < totalYears; years += 3) {
    studiendirektoren *= 1 - pensionPercentage;
    oberstudienraete *= 1 - pensionPercentage;
    studienraete *= 1 - pensionPercentage;

    int promotedOberstudienraete =
        oberstudienraete * oberstudienraetePromotionPercentage;
    oberstudienraete -= promotedOberstudienraete;
    studiendirektoren += promotedOberstudienraete;

    int promotedStudienraete = studienraete * studienraetePromotionPercentage;
    studienraete -= promotedStudienraete;
    oberstudienraete += promotedStudienraete;

    int freePositions =
        totalPositions - studiendirektoren - oberstudienraete - studienraete;
    studienraete += freePositions;

    printf(
        "After %d years there are %d Studienraete, %d Oberstudienraete and "
        "%d Studiendirektoren.\n",
        years, studienraete, oberstudienraete, studiendirektoren);
  }

  printf("\n");

  return EXIT_SUCCESS;
}