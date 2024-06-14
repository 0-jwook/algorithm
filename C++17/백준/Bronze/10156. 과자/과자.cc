#include<stdio.h>
#include<string.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a*b-c<0) {
        printf("0");
    }else{
        printf("%d", a*b-c);
    }
    return 0;
}
