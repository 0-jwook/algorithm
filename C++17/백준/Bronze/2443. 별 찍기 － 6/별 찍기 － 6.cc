#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 0;
    scanf("%d", &a);
    
    for(int i = 1; i<=a; i++){
        for (int p = i-1; p>0; p--) {
            printf(" ");
        }
        for(int j = i-1; j<a; j++){
            printf("*");
        }
        for(int j = i; j<a; j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
