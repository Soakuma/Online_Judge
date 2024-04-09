#include <stdio.h>

#include <math.h>

int main(){

  int n;

  scanf("%d", &n);

  int digit = 1;

  int max_num = 2;

  while(max_num < n){

    digit++;

    max_num += pow(2, digit);

  }

  // printf("digit = %d\n", digit);

  // printf("n index = %d\n", n - max_num/2);

  char result[digit];

  char cur;

  int index = n - max_num/2;

  int digit_copy = digit-1;

  while(digit_copy > -1){

    cur = index % 2 == 0 ? '4' : '7';

    index /= 2;

    result[digit_copy--] = cur;

  }

  for(int i = 0; i < digit; i++){

    printf("%c", result[i]);

  }

}