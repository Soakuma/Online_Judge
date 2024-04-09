#include<stdio.h>

int main(){
    int k, c;
    scanf("%d %d", &k, &c);
    for(int i = 0; i < c; i++){
        int m, n;
        scanf("%d %d", &m, &n);
        if(m < n){
            if(n - m - 1 >= k - n + 1){
				printf("0\n");
			}else{
				printf("1\n");
			}
        }else if(m > n){
            if(k - m + 1 < m - n - 1){
				printf("0\n");
			}else{
				printf("1\n");
			}
        }else{
			printf("1\n");
		}
    }
}