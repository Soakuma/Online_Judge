#include <stdio.h>
#include <math.h>

int main(){
	int n, res = 1;
    scanf("%d", &n);
    for(int i = 0; res <= n; i++){
    	res += pow(2, i);
	}
	printf("%d", res/2);
}