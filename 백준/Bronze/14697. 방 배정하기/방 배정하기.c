#include<stdio.h>

int main(){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    for(int i = 0; i <= 90000; i++){
        for(int j = 0; j <= n / b; j++){
            for(int k = 0; k <= n / c; k++){
                if(a * i + b * j + c * k == n){
                    printf("1");
                    return 0;
                }
            }
        }
    } 
    printf("0");
}