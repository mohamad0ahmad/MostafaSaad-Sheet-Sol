#include <stdio.h>

int main() {
  int cols, swap;
  scanf("%i", &cols);
  int arr[cols];

  for (int i = 0; i < cols; i++) {
    scanf("%i", &arr[i]);
  }
  for (int i = 0; i < cols; i++) {
    for (int j = (i + 1); j < cols; j++) {
      if (arr[i] >= arr[j]) {
        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
      }
    }
  }
  for (int i = 0; i < cols; i++) {
    printf("%i ", arr[i]);
  }
  return 0;
}
