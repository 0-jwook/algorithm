#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 0;
    scanf("%d", &a);
    
    for(int i = 1; i<=a; i++){
        for (int p = i; p<a; p++) {
            printf(" ");
        }
        for(int j = i; j>0; j--){
            printf("*");
        }
        for(int j = i-1; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
