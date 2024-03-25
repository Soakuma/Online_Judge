#include <stdio.h>

int counter(int arr[], int n){
  int count = 0;
  for(int i = 0; i < n-1; i++){
    if((arr[i] % 2 == 0 && arr[i+1] % 2 == 1) || (arr[i] % 2 == 1 && arr[i+1] % 2 == 0)){
      count++;
    }
  }
  return count;
}
int main(){
  int n;
  scanf("%d", &n);
  int oddarr[n];
  int evenarr[n];
  int inp;
  for(int i = 0; i < n; i++){
    scanf("%d", &inp);
    evenarr[i] = inp;
    oddarr[i] = inp;
  }
  int odd_count = 0;
  while(1){
    for(int i = 0; i < n-1; i++){
      if(oddarr[i] % 2 == 0 && oddarr[i+1] % 2 == 1){
        int temp = oddarr[i];
        oddarr[i] = oddarr[i+1];
        oddarr[i+1] = temp;
        odd_count++;
      }
    }
    if(counter(oddarr, n) <= 1){
      break;
    }
  }
  int even_count = 0;
  while(1){
    for(int i = 0; i < n-1; i++){
      if(evenarr[i] % 2 == 1 && evenarr[i+1] % 2 == 0){
        int temp = evenarr[i];
        evenarr[i] = evenarr[i+1];
        evenarr[i+1] = temp;
        even_count++;
      }
    }
    if(counter(evenarr, n) <= 1){
      break;
    }
  }
  printf("%d", odd_count > even_count ? even_count : odd_count);
}