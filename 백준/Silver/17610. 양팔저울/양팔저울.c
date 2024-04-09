#include <stdio.h>
#include <math.h>

int n, flag = 0, sum = 0;
int k[15] = {};
int isok[26000013] = {};

int fun(int a, int b){
	isok[b] = 1;
	if(a >= n){
        return 1;
    }
	fun(a + 1, b);
	fun(a + 1, b + k[a]);
	fun(a + 1, abs(b - k[a]));
}
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &k[i]);
		flag += k[i];
	}
	fun(0, 0);
	for(int i = 1; i <= flag; i++){
		if(!isok[i]){
			sum++;
		}
	}
	printf("%d", sum);
}