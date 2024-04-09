#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
  	int t1[n][n];
	int t2[n][n];
	for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
    	scanf("%d", &t1[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
    		scanf("%d", &t2[i][j]);
		}
	}
	int max = 999;
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
    		if(t1[i][j] != t2[i][j]){
    			count++;
    		}
    	}
	}
	if(max > count){
    max = count;
	}
	count = 0;
	int i1 = 0;
	for(int i = n-1; i >= 0; i--, i1++){
    	int j1 = 0;
		for(int j = i; j < n; j++, j1++){
    		if(t1[j][i] != t2[i1][j1]){
    			count++;
    		}
    	}
	}
	if(max > count){
		max = count;
	}
	count = 0;
	for(int i = 0; i < n; i++){
	int j2 = 0;
    for(int j = i; j >= 0; j--, j2++){
    	if(t1[i][j] != t2[i][j2]){
    		count++;
    		}
    	}
	}
	if(max > count){
    max = count;
	}
	count = 0;
	int i2 = n-1;
	int j3 = 0;
	for(int i = 0; i < n; i++, j3++){
		int i_cur = i2;
		int j_cur = j3;
		for(int j = 0; j < i+1; j++){
    		if(t2[i][j] != t1[i_cur--][j_cur--]){
    			count++;
    		}
		}
	}
	if(max > count){
	max = count;
	}
	count = 0;
	int i3 = 0;
	for(int i = n-1; i >= 0; i--, i3++){
    int j2 = 0;
    for(int j = n-1; j >= i; j--, j2++){
    	if(t1[j][i] != t2[i3][j2]){
    		count++;
    		}
		}
	}
	if(max > count){
		max = count;
	}
	count = 0;
	int i4 = n-1;
	int j4 = 0;
	for(int i = 0; i < n; i++, i4--){
		int i_cur = i4;
		int j_cur = j4;
		for(int j = 0; j < i+1; j++){
    		if(t2[i][j] != t1[i_cur++][j_cur++]){
    		count++;
    		}
		}
	}
	if(max > count){
		max = count;
	}
	printf("%d", max);
}