#include <stdio.h>
#include <stdlib.h>

int main() {
  int lieferfaehig;
  int angabenVollstaendig;
  int bonitaetInOrdnung;

  printf("\n");
  printf("Lieferfähig?          ");
  scanf("%d", &lieferfaehig);
  printf("Angaben vollständig?  ");
  scanf("%d", &angabenVollstaendig);
  printf("Bonität in Ordnung?   ");
  scanf("%d", &bonitaetInOrdnung);

  printf("\nAktionen:\n");

  if (!lieferfaehig) {
    printf("  - Mitteilen: nicht lieferbar\n");
  } else {
    if (bonitaetInOrdnung) {
      printf("  - Lieferung mit Rechnung\n");
    } else {
      printf("  - Lieferung als Nachnahme\n");
    }
    if (!angabenVollstaendig) {
      printf("  - Angaben vervollständigen\n");
    }
  }

  printf("\n");

  return EXIT_SUCCESS;
}