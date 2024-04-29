#include <stdio.h>

int main(){
  int n;
  int stair[301];
  int accumul[301];
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    scanf("%d", &stair[i]);
  }
  stair[0] = 0;

  accumul[0] = 0;
  accumul[1] = stair[1];
  accumul[2] = stair[1] + stair[2];
  
  for(int i = 3; i <= n; i++){
    accumul[i] = accumul[i-3] + stair[i-1] + stair[i] > accumul[i-2] + stair[i] ? accumul[i-3] + stair[i-1] + stair[i] : accumul[i-2] + stair[i];
  }
    
  // for(int i = 0; i <= n; i++){
  //   printf("%d %d\n", i, accumul[i]);
  // }
  printf("%d", accumul[n]);
}