#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int min = 1001;
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		if(b >= a && b < min){
			min = b;
		}
	}
	if(min != 1001){
		printf("%d", min);		
	}else{
		printf("-1");
	}

}