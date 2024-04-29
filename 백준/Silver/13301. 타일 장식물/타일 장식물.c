#include <stdio.h>

int main(){
	int n;
	long long int answer = 0;
	long long int arr[90];
	scanf("%d",&n);
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i <= n; i++){
		arr[i] = arr[i-2] + arr[i-1];
	}
	answer += (arr[n] + arr[n-1]) * 2;
	printf("%lld", answer);
}