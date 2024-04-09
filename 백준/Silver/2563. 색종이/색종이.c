#include <stdio.h>

int main(){
  int total = 0;
  int arr[100][100];
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 100; j++){
      arr[i][j] = 0;
    }
  }
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int j = a; j < a + 10; j++){
      for(int k = b; k < b + 10; k++){
        arr[j][k] = 1;
      }
    }
  }
  for(int i = 0; i < 100; i++){
    for(int j = 0; j < 100; j++){
      total += arr[i][j];
    }
  }
  printf("%d", total);
}