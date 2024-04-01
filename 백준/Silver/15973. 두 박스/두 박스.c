#include <stdio.h>
#include <math.h>

int main(){
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
	if((x2 < x3 || x4 < x1) || (y2 < y3 || y4 < y1)){
		printf("NULL");
	}else if((x2 == x3 || x4 == x1)){
		if(y2 == y3 || y4 == y1){
			printf("POINT");
		}else{
			printf("LINE");
		}
	}else{
		if(y2 == y3 || y4 == y1){
			printf("LINE");
		}else{
			printf("FACE");
		}
	}
}