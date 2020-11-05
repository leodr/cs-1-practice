#include <stdio.h>
#include <stdlib.h>

int main() {
  int totalSeats;
  int aPartyVotes, bPartyVotes, cPartyVotes;

  printf("\nAvailable seats:   ");
  scanf("%d", &totalSeats);
  printf("Votes for party A: ");
  scanf("%d", &aPartyVotes);
  printf("Votes for party B: ");
  scanf("%d", &bPartyVotes);
  printf("Votes for party C: ");
  scanf("%d", &cPartyVotes);

  int aPartyDivisor = 1, bPartyDivisor = 1, cPartyDivisor = 1;
  int aPartySeats = 0, bPartySeats = 0, cPartySeats = 0;

  while ((aPartySeats + bPartySeats + cPartySeats) < totalSeats) {
    int aPart = aPartyVotes / aPartyDivisor;
    int bPart = bPartyVotes / bPartyDivisor;
    int cPart = cPartyVotes / cPartyDivisor;

    if (aPart >= bPart && aPart >= cPart) {
      ++aPartyDivisor;
      ++aPartySeats;
    } else if (bPart >= aPart && bPart >= cPart) {
      ++bPartyDivisor;
      ++bPartySeats;
    } else if (cPart >= aPart && cPart >= bPart) {
      ++cPartyDivisor;
      ++cPartySeats;
    }
  }

  printf(
      "\nParty A receives %d seats, party B receives %d seats and party C "
      "receives %d seats.\n\n",
      aPartySeats, bPartySeats, cPartySeats);

  return EXIT_SUCCESS;
}