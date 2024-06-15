#include<stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = 0; i<a; i++) {
        for (int j = a-i; j>1; j--) {
            printf(" ");
        }
        for (int p = 0; p<=i; p++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
