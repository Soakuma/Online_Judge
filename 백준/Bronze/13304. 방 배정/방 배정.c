#include <stdio.h>

int main() {
  int n, k;
  int room[6][2] = {
      0,
  };
  int total = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    int s, y;
    scanf("%d %d", &s, &y);
    room[y - 1][s]++;
  }
  if((room[0][0] + room[0][1] + room[1][0] + room[1][1]) % k == 0){
    total += (room[0][0] + room[0][1] + room[1][0] + room[1][1]) / k;
  }else{
    total += (room[0][0] + room[0][1] + room[1][0] + room[1][1]) / k + 1;
  }
  if((room[2][0] + room[3][0]) % k == 0){
    total += (room[2][0] + room[3][0]) / k;
  }else{
    total += (room[2][0] + room[3][0]) / k + 1;
  }
  
  if((room[2][1] + room[3][1]) % k == 0){
    total += (room[2][1] + room[3][1]) / k;
  }else{
    total += (room[2][1] + room[3][1]) / k + 1;
  }
  if((room[4][0] + room[5][0]) % k == 0){
    total += (room[4][0] + room[5][0]) / k;
  }else{
    total += (room[4][0] + room[5][0]) / k + 1;
  }
  if((room[4][1] + room[5][1]) % k == 0){
    total += (room[4][1] + room[5][1]) / k;
  }else{
    total += (room[4][1] + room[5][1]) / k + 1;
  }
  printf("%d", total);
}