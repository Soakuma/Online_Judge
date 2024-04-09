#include <stdio.h>

int main() {
  int numbers[7];
  int sum = 0;
  int min = -1;

  for (int i = 0; i < 7; ++i) {
    scanf("%d", &numbers[i]);
  }
  for (int i = 0; i < 7; ++i) {
    if (numbers[i] % 2 != 0) {
        sum += numbers[i];
      if (min == -1 || numbers[i] < min) {
          min = numbers[i];
      }
    }
  }
  if (sum == 0) {
    printf("-1\n");
  } else {
    printf("%d\n", sum);
    printf("%d", min);
  }
}