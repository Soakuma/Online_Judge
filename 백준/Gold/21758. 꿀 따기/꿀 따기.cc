#include <stdio.h>

int main(){
	int n, end=0;
	int arr[100001];
	int h[100001];
	int res = 0, res1 = 0, res2 = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &arr[i]);
		h[i] = h[i - 1] + arr[i];
	}
	for(int i = 2; i < n; i++){
		if(res1 < (h[i] - h[1]) + (h[n - 1] - h[i - 1])){
			res = (h[i] - h[1]) + (h[n - 1] - h[i - 1]);
		}else{
			res = res1;
		}
    }
    for(int i = 2; i < n; i++){
    	if(res1 < (h[n] - h[1] - arr[i]) + (h[n] - h[i])){
    		res1 = (h[n] - h[1] - arr[i]) + (h[n] - h[i]);
		}else{
			res1 = res1;
		}
    }
    for(int i = 2; i < n; i++){
    	if(res2 < (h[n - 1] - h[0] - arr[i]) + (h[i - 1] - h[0])){
    		res2 = (h[n - 1] - h[0] - arr[i]) + (h[i - 1] - h[0]);
		}else{
			res2 = res2;
		}
	}
	if(res1 < res2){
		if(res < res2){
			printf("%d", res2);
		}else{
			printf("%d", res);
		}
	}else{
		if(res < res1){
			printf("%d", res1);
		}else{
			printf("%d", res);
		}
	}
}