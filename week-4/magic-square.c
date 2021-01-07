#include <stdio.h>
#include <stdlib.h>

int main() {
  int square[5][5] = {{19, 3, 12, 21, 10},
                      {11, 25, 9, 18, 2},
                      {8, 17, 1, 15, 24},
                      {5, 14, 23, 7, 16},
                      {22, 6, 20, 4, 13}};

  int isMagic = 1;
  int desiredSum;

  // Check if every row and column has the same sum
  for (int i = 0; i < 5 && isMagic; i++) {
    int rowSum = 0;
    int columnSum = 0;

    for (int j = 0; j < 5; j++) {
      rowSum = square[i][j];
      columnSum = square[j][i];
    }

    if (i == 0) {
      if (rowSum == columnSum) {
        desiredSum = rowSum;
      } else {
        isMagic = 0;
      }
    } else {
      if (rowSum != desiredSum || columnSum != desiredSum) {
        isMagic = 0;
      }
    }
  }

  // Check if the diagonals have the desired sum
  int topLeftToBottomRightSum = 0;
  int bottomLeftToTopRightSum = 0;

  for (int i = 0; i < 5; i++) {
    topLeftToBottomRightSum += square[i][i];
    bottomLeftToTopRightSum += square[5 - i][i];
  }

  if (topLeftToBottomRightSum != desiredSum ||
      bottomLeftToTopRightSum != desiredSum) {
    isMagic = 0;
  }

  if (isMagic) {
    printf("This square is magic.");
  } else {
    printf("This square is not magic.");
  }

  return EXIT_SUCCESS;
}