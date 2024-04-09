#include <stdio.h>

int main(){
  int temp = -1, index1, index2;
  int arr[9][9];
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  printf("\n");
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      if(arr[i][j] > temp){
        temp = arr[i][j];
        index1 = i+1;
        index2 = j+1;
      }
    }
  }
  printf("%d\n", temp);
  printf("%d %d", index1, index2);
}