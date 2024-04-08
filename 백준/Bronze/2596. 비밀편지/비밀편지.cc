#include <stdio.h>

int main(){  
  int n;
  scanf("%d", &n);
  char l[6];
  char ans[n];
  for(int i = 0; i < n; i++){
    scanf(" %c %c %c %c %c %c", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5]);
    int Adiff = 0;
    if(l[0] != '0') Adiff++;
    if(l[1] != '0') Adiff++;
    if(l[2] != '0') Adiff++;
    if(l[3] != '0') Adiff++;
    if(l[4] != '0') Adiff++;
    if(l[5] != '0') Adiff++;

    int Bdiff = 0;
    if(l[0] != '0') Bdiff++;
    if(l[1] != '0') Bdiff++;
    if(l[2] != '1') Bdiff++;
    if(l[3] != '1') Bdiff++;
    if(l[4] != '1') Bdiff++;
    if(l[5] != '1') Bdiff++;

    int Cdiff = 0;
    if(l[0] != '0') Cdiff++;
    if(l[1] != '1') Cdiff++;
    if(l[2] != '0') Cdiff++;
    if(l[3] != '0') Cdiff++;
    if(l[4] != '1') Cdiff++;
    if(l[5] != '1') Cdiff++;

    int Ddiff = 0;
    if(l[0] != '0') Ddiff++;
    if(l[1] != '1') Ddiff++;
    if(l[2] != '1') Ddiff++;
    if(l[3] != '1') Ddiff++;
    if(l[4] != '0') Ddiff++;
    if(l[5] != '0') Ddiff++;

    int Ediff = 0;
    if(l[0] != '1') Ediff++;
    if(l[1] != '0') Ediff++;
    if(l[2] != '0') Ediff++;
    if(l[3] != '1') Ediff++;
    if(l[4] != '1') Ediff++;
    if(l[5] != '0') Ediff++;

    int Fdiff = 0;
    if(l[0] != '1') Fdiff++;
    if(l[1] != '0') Fdiff++;
    if(l[2] != '1') Fdiff++;
    if(l[3] != '0') Fdiff++;
    if(l[4] != '0') Fdiff++;
    if(l[5] != '1') Fdiff++;

    int Gdiff = 0;
    if(l[0] != '1') Gdiff++;
    if(l[1] != '1') Gdiff++;
    if(l[2] != '0') Gdiff++;
    if(l[3] != '1') Gdiff++;
    if(l[4] != '0') Gdiff++;
    if(l[5] != '1') Gdiff++;

    int Hdiff = 0;
    if(l[0] != '1') Hdiff++;
    if(l[1] != '1') Hdiff++;
    if(l[2] != '1') Hdiff++;
    if(l[3] != '0') Hdiff++;
    if(l[4] != '1') Hdiff++;
    if(l[5] != '0') Hdiff++;
    
    if(Adiff <= 1){
      ans[i] = 'A';
    }else if(Bdiff <= 1){
      ans[i] = 'B';
    }else if(Cdiff <= 1){
      ans[i] = 'C';
    }else if(Ddiff <= 1){
      ans[i] = 'D';
    }else if(Ediff <= 1){
      ans[i] = 'E';
    }else if(Fdiff <= 1){
      ans[i] = 'F';
    }else if(Gdiff <= 1){
      ans[i] = 'G';
    }else if(Hdiff <= 1){
      ans[i] = 'H';
    }else{
      printf("%d", i+1);
      return 0;
    }
  }
  for(int i = 0; i < n; i++){
    printf("%c", ans[i]);
  }
}