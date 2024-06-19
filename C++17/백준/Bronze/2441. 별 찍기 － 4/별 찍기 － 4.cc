#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 0;
    scanf("%d", &a);
    for(int i = a; i>0; i--){
        for (int p = i; p<a; p++) {
            printf(" ");
        }
        for(int j = i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
