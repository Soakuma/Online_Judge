#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char s[100001];
		scanf("%s", s);
		int left = 0, right = strlen(s) - 1;
		int pal = 1;
		int ppal = 1;
		
		while(left < right){
			if(s[left] != s[right]){
				pal = 0;
				int left_remo = left + 1, right_remo = right;
				int pal_remove = 1;
				
				while(left_remo < right_remo){
					if(s[left_remo] != s[right_remo]){
						pal_remove = 0;
						break;
					}
					left_remo++;
					right_remo--;
				}
				
				int left_add = left, right_add = right - 1;
				int pal_add = 1;
				while(left_add < right_add){
					if(s[left_add] != s[right_add]){
						pal_add = 0;
						break;
					}
					left_add++;
					right_add--;
				}
				if(pal_remove == 0 && pal_add == 0){
					ppal = 0;
					break;
				}
				break;
			}
			left++;
			right--;
		}
		
		if(pal == 1){
			printf("0\n");
		}
		else if(ppal == 1){
			printf("1\n");
		}
		else{
			printf("2\n");
		}
	}
}