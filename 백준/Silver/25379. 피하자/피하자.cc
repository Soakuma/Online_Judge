#include <stdio.h>
#include <math.h>
int arr[1000001]={};

int main(){
	int n;
	long long int odd = 0, even = 0, isodd = 0, iseven = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0){
			even++;
			isodd += odd;
		}else{
			odd++;
			iseven += even;
		}
	}
	if(isodd < iseven){
		printf("%lld", isodd);
	}else{
		printf("%lld", iseven);
	}
}