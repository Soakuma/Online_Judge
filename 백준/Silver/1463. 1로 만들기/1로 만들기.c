#include <stdio.h>

int main(){
  int n;
  int arr[1000000] = {0, };   // dp 배열
  arr[2] = 1;  // 최초 dp 배열의 초기값
  arr[3] = 1;  // 최초 dp 배열의 초기값
  scanf("%d", &n);  // 정수 입력
  for(int i = 4; i <= n; i++){ // n까지 반복
    arr[i] = arr[i-1] + 1; // 모든 정수가 가능한 선택지(-1) 우선 적용
    
    if(i % 2 == 0){  // 2로 나누기가 가능할때
      if(arr[i/2] + 1 < arr[i]){  // 2로 나눈값+1이 i번째 값보다 작을때
        arr[i] = arr[i/2] + 1;  // i번째 값을 2로 나눈값+1로 설정
      } 
    }
    
    if(i % 3 == 0){  // 3로 나누기가 가능할때
      if((arr[i/3] + 1) < arr[i]){  // 3으로 나눈값+1이 i번째 값보다 작을때
        arr[i] = arr[i/3] + 1;  // i번째 값을 3으로 나눈값+1로 설정
      }
    }
  }
  printf("%d", arr[n]); // n번째 값 출력
}