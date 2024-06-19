#include<stdio.h>
#include <string.h>
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b-c);
    int n = b;
    while (n != 0) {
        n/=10;
        a*=10;
    }
    printf("%d\n", a+b-c);
    
    return 0;
}
