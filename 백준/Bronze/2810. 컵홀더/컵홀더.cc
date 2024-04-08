#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  char inp;
  int s_count = 0, l_count = 0;
  
  for(int i = 0; i < n; i++){
    scanf(" %c", &inp);
    if(inp == 'S'){
      s_count++;
    }else{
      l_count++;
    }
  }
  int holder = s_count + (l_count/2) + 1, human = s_count + l_count;
  if(holder > human){
    printf("%d", human);
  }else{
    printf("%d", holder);
  }
}