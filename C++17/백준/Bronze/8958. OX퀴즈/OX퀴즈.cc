#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n;i++){
		int cnt = 0;
		int result = 0;
		char ox[81];
		scanf("%s", ox);
		for(int j = 0; j<strlen(ox);j++){
			if(ox[j] == 'O'){
				cnt++;
				result=result+cnt;
			}else{
				cnt = 0;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}
