#include <stdio.h>

int t;
int n, a, b, c, d, e;

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a=0, b=0, c=0, d=0, e=0;
		a = a+n/60;
		n = n%60;
		if(n > 35){
			a++;
			c = 6 - (n + 5) / 10;
			n %= 10;
			if(n >= 5){
				e += 10 - n;
			}else{
				d += n;
			}
		}else{
			b = (n + 4) / 10;
			n %= 10;
			if(n >= 6){
				e += 10 - n;
			}else{
				d += n;
			}
		}
		printf("%d %d %d %d %d\n", a, b, c, d, e);
	}
}