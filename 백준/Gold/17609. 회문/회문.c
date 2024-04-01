#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char c[100001]="";
		scanf("%s", c);
		int length = strlen(c);
		int l = 0, r = length - 1;
		int is_pal = 1;
		int pp = 1;
		while(l < r){
			if(c[l] != c[r]){
				is_pal = 0;
				int lremove = l + 1, rremove = r;
				int removep = 1;
				while(lremove < rremove){
					if(c[lremove] != c[rremove]){
						removep = 0;
						break;
					}
					lremove++;
					rremove--;
				}
				int ladd = l, radd = r - 1;
				int addp = 1;
				while(ladd < radd){
					if(c[ladd] != c[radd]){
						addp = 0;
						break;
					}
					ladd++;
					radd--;
				}
				if(removep == 0 && addp == 0){
					pp = 0;
					break;
				}
				break;
			}
			l++;
			r--;
		}
		if(is_pal == 1){
			printf("0\n");
		}
		else if(pp == 1){
			printf("1\n");
		}
		else{
			printf("2\n");
		}
	}
}