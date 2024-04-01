#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int tri1[n][n];
  int tri2[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      tri1[i][j] = -1;
      tri2[i][j] = -1;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      scanf("%d", &tri1[i][j]);
    }
  }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      scanf("%d", &tri2[i][j]);
    }
  }
  
  int diff = 9999;
  int count = 0;
  for(int i = 0; i < n; i++){
    int j2 = 0;
    for(int j = i; j >= 0; j--, j2++){
      if(tri1[i][j] != tri2[i][j2]){
        count++;
      }
    }
  }
  if(diff > count){
    diff = count;
  }
  count = 0;
  int i2 = 0;
  for(int i = n-1; i >= 0; i--, i2++){
    int j2 = 0;
    for(int j = i; j < n; j++, j2++){
      if(tri1[j][i] != tri2[i2][j2]){
        count++;
      }
    }
  }
  if(diff > count){
    diff = count;
  }
  count = 0;
  int i3 = n-1;
  int j3 = 0;
  for(int i = 0; i < n; i++, j3++){
    int curi = i3;
    int curj = j3;
    for(int j = 0; j < i+1; j++){
      if(tri2[i][j] != tri1[curi--][curj--]){
        count++;
      }
    }
  }
  if(diff > count){
    diff = count;
  }
  printf("%d", count);
}