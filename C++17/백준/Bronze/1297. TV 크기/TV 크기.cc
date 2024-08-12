#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void) {
    int  a, b, c;
    scanf("%d %d %d", &a, &b ,&c);
    double d2;
    d2 = sqrt((b*b)+(c*c));
    double h1 = a*b/d2;
    double w1 = a*c/d2;
    printf("%d %d", (int)h1, (int)w1);
    return 0;
}

