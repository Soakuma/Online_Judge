#include <stdio.h>

int arr[1000000];

int main(){
	int n;
	long long int even = 0, odd = 0, even_count = 0, odd_count = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0){
			even++;
			odd_count += odd;
		}else{
			odd++;
			even_count += even;
		}
	}
	if(even_count < odd_count){
		printf("%lld", even_count);
	}else{
		printf("%lld", odd_count);
	}
}