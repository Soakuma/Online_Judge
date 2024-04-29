#include <stdio.h>
#include <math.h>

int main(){
  int xmax, ymax, store, dongnum, dongcor;
  scanf("%d %d", &xmax, &ymax);
  scanf("%d", &store);
  int storenum[store];
  int storecor[store];
  for(int i = 0; i < store; i++){
    scanf("%d %d", &storenum[i], &storecor[i]);
  }
  scanf("%d %d", &dongnum, &dongcor);

  int distance = 0;
  
  for(int i = 0; i < store; i++){
    if(storenum[i] == dongnum){
      distance += abs(storecor[i] - dongcor);
    }else if(storenum[i] * dongnum == 2){
      distance += storecor[i] + dongcor < xmax * 2 - storecor[i] - dongcor ? storecor[i] + dongcor : xmax * 2 - storecor[i] - dongcor;
      distance += ymax;
    }else if(storenum[i] * dongnum == 3){
      distance += storecor[i] + dongcor;
    }else if(storenum[i] * dongnum == 4){
      if(storenum[i] == 1){
        distance += xmax - storecor[i] + dongcor;
      }else{
        distance += xmax - dongcor + storecor[i];
      }
    }else if(storenum[i] * dongnum == 6){
      if(storenum[i] == 2){
        distance += ymax - dongcor + storecor[i];
      }else{
        distance += ymax - storecor[i] + dongcor;
      }
    }else if(storenum[i] * dongnum == 8){
      distance += xmax + ymax - storecor[i] - dongcor;
    }else if(storenum[i] * dongnum == 12){
      distance += storecor[i] + dongcor < ymax * 2 - storecor[i] - dongcor ? storecor[i] + dongcor : ymax * 2 - storecor[i] - dongcor;
      distance += xmax;
    }
  }
  printf("%d", distance);
}