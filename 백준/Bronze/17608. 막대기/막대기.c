#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[100000];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int cansee = 1;
    int h = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > h){
            cansee++;
            h = arr[i];
        }
    }
    printf("%d", cansee);
}