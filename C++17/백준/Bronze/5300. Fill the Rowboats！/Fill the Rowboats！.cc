#include<stdio.h>
#include<string.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++) {
        printf("%d ", i);
        if (i%6==0) {
            printf("Go! ");
        }
    }
    if (a%6!=0) {
        printf("Go!");
    }
    return 0;
}
