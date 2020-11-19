#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\nPossible combinations of family members:\n");

  for (int anton = 0; anton <= 1; anton++) {
    for (int doris = 0; doris <= 1; doris++) {
      for (int berta = 0; berta <= 1; berta++) {
        for (int claus = 0; claus <= 1; claus++) {
          // At least one family member has to go.
          int atLeastOneMember = anton + doris + berta + claus >= 1;

          // Anton cannot go with Doris.
          int antonNotWithDoris = anton + doris < 2;

          // If Berta goes, Claus is coming with her.
          int clausWithBerta = !berta || berta && claus;

          // When Anton and Claus go, Berta stays home.
          int bertaHomeWhenAntonAndClaus =
              anton + claus < 2 || anton + claus == 2 && !berta;

          // If Anton stays home, either Doris or Claus go.
          int antonHomeDorisOrClaus = anton || !anton && doris + claus == 1;

          // All conditions have to be true for a combination to be possible.
          if (atLeastOneMember && antonNotWithDoris && clausWithBerta &&
              bertaHomeWhenAntonAndClaus && antonHomeDorisOrClaus) {
            printf("  - ");

            if (anton) {
              printf("Anton");

              if (doris + berta + claus == 1) {
                printf(" and ");
              } else if (doris + berta + claus > 1) {
                printf(", ");
              }
            }

            if (doris) {
              printf("Doris");

              if (berta + claus == 1) {
                printf(" and ");
              } else if (berta + claus > 1) {
                printf(", ");
              }
            }

            if (berta) {
              printf("Berta");

              if (claus) {
                printf(" and ");
              }
            }

            if (claus) {
              printf("Claus");
            }

            printf("\n");
          }
        }
      }
    }
  }

  printf("\n");

  return EXIT_SUCCESS;
}