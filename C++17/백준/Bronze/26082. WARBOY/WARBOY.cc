#include <stdio.h>
#include <string.h>
int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int d = b/a;
    printf("%d", c*3*d);
    return 0;
}
