#include <stdio.h>
#include <math.h>

int n, sum = 0, flag = 0;
int arr[15] = {0};
int possible[26000013] = {0};

void fun(int a, int b){
	if(b>=0) possible[b] = 1;
	if(a >= n) return;
	fun(a + 1, b);
	fun(a + 1, b + arr[a]);
	fun(a + 1, b - arr[a]);
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	fun(0, 0);
	for(int i = 1; i <= sum; i++){
		if(!possible[i]){
			flag++;
		}
	}
	printf("%d", flag);
}