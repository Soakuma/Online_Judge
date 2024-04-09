#include <stdio.h>

int main(){
  int m, n;
  scanf("%d %d", &m, &n);
  char board[m][n];
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      scanf(" %c", &board[i][j]);
    }
  }
  int wbmin = 65;
  int wbmode = 0;
  for(int i = 0; i <= m - 8; i++){
    for(int j = 0; j <= n - 8; j++){
      
      int wb_to_paint = 0;
      int bw_to_paint = 0;
      
      for(int k = i; k < i + 8; k++){
        wbmode = !wbmode;
        for(int l = j; l < j + 8; l++){
          if(board[k][l] == 87){
            if(wbmode == 1){
              bw_to_paint++;
            }
            else{
              wb_to_paint++;
            }
          }
          if(board[k][l] == 66){
            if(wbmode == 0){
              bw_to_paint++;
            }
            else{
              wb_to_paint++;
            }
          }
          wbmode = !wbmode;
        }
      }
      if(wb_to_paint < bw_to_paint){
        if(wb_to_paint < wbmin){
          wbmin = wb_to_paint;
        }
      }else{
        if(bw_to_paint < wbmin){
          wbmin = bw_to_paint;
        }
      }
    }
  }
  printf("%d", wbmin);
}