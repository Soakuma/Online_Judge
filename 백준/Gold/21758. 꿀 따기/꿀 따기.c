#include <stdio.h>
#include <math.h>

int place[100001]={};
int home[100001]={};

int max(int a, int b){
    if(a<b){
    	return b;
	}else{
		return a;
	}
}

int main(){
	int n, final = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &place[i]);
		home[i] = home[i-1] + place[i];
	}
	int temp1=0, temp2=0, temp3=0;
	for(int i = 2; i < n; i++){
        temp1 = max(temp1, (home[i] - home[1]) + (home[n - 1] - home[i - 1]));
    }
    for(int i = 2; i < n; i++){
        temp2 = max(temp2, (home[n] - home[1] - place[i]) + (home[n] - home[i]));
    }
    for(int i = 2; i < n; i++){
    	temp3 = max(temp3, (home[n - 1]-home[0] - place[i]) + (home[i - 1] - home[0]));
	}
	printf("%d", max(temp1, max(temp2, temp3)));
}