#include <stdio.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	n = n - k * (k + 1) /2;
	if(n < 0){
		printf("-1");
	}else{
		printf("%d", k - 1 + (n % k != 0));
	}
}