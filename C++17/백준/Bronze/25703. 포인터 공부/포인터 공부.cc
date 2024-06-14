#include<stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("int a;\n");
    printf("int *ptr = &a;\n");
    if (a>=2) {
        printf("int **ptr2 = &ptr;\n");
    }
    for (int i = 3; i<=a; i++) {
        printf("int ");
        for (int j = 0; j<i; j++) {
            printf("*");
        }
        printf("ptr%d = &ptr%d;\n", i, i-1);
        
    }
    return 0;
}
