#include <stdio.h>

int main(){
	int n, k, count = 0;
	char c[20000];
	scanf("%d %d %s", &n, &k, &c);
	for(int i = 0; i < n; i++){
		if(c[i] == 'P'){
			for(int j = k; j >= -k; j--){
				if(c[i - j] == 'H'){
					count++;
					c[i - j] = 'N';
					break;
				}
			}
		}
	}
	printf("%d", count);
}