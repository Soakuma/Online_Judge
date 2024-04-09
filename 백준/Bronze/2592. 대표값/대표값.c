#include <stdio.h>

int main(){
  int sum = 0;
  int size = 10;
  int arr[100];
  for(int i = 0; i < 100; i++){
    arr[i] = 0;
  }
  for(int i = 0; i < size; i++){
    int n = 0;
    scanf("%d", &n);
    arr[n/10] += 1;
    sum += n;
  }
  int count = 0, index = 0;
  for(int i = 0; i < 100; i++){
    if(arr[i] != 0){
      if(count < arr[i]){
        count = arr[i];
        index = i;
      }
    }
  }
  printf("%d\n", sum / size);
  printf("%d", index * 10);
}