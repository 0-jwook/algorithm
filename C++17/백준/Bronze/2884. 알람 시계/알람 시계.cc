#include<stdio.h>
#include <string.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    b-=45;
    if (b<0) {
        b = 60+b;
        a-=1;
        
    }
    if (a<0) {
        a=23;
    }
    printf("%d %d", a, b);
    return 0;
}