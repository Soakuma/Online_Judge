#include <stdio.h>

int main(){
  int sum = 0;
  int arr[5];
  for(int i = 0; i < 5; i++){
    int n = 0;
    scanf("%d", &n);
    arr[i] = n;
    sum += n;
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5 - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        int tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  printf("%d\n", sum / 5);
  printf("%d", arr[2]);
}