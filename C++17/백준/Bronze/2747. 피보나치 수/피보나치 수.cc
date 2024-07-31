#include <stdio.h>

int n;

int main(void) {
    scanf("%d", &n);
    if (n == 1 || n == 2) {
        printf("1");
        return 0;
    }
    
    long long int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    printf("%lld", b);
    return 0;
}
