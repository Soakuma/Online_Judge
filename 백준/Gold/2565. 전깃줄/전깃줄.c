#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  int stick[a][2];
  for (int i = 0; i < a; i++) {
    scanf("%d %d", &stick[i][0], &stick[i][1]);
  }
  for (int i = 0; i < a - 1; i++) {
    for (int j = 0; j < a - i - 1; j++) {
      if (stick[j][0] > stick[j + 1][0]) {
        int temp1 = stick[j][0];
        int temp2 = stick[j][1];
        stick[j][0] = stick[j + 1][0];
        stick[j][1] = stick[j + 1][1];
        stick[j + 1][0] = temp1;
        stick[j + 1][1] = temp2;
      }
    }
  }
  int ls[a];
  for (int i = 0; i < a; i++) {
    ls[i] = 1;
  }
  for (int i = 1; i < a; i++) {
    for (int j = 0; j < i; j++) {
      if (stick[j][1] < stick[i][1]) {
        ls[i] = ls[i] > ls[j] + 1 ? ls[i] : ls[j] + 1;
      }
    }
  }
  int max = 0;
  for (int i = 0; i < a; i++) {
    max = max > ls[i] ? max : ls[i];
  }
  int min = a - max;
  printf("%d\n", min);
}