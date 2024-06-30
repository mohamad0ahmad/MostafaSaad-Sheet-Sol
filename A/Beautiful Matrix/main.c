#include <math.h>
#include <stdio.h>

int main() {
  int arr[5][5];
  int r, c, moves;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%i", &arr[i][j]);
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i][j] == 1) {
        r = (i + 1);
        c = (j + 1);
        break;
      }
    }
  }

  moves = (abs(r - 3)) + (abs(c - 3));
  printf("%i", moves);
  return 0;
}