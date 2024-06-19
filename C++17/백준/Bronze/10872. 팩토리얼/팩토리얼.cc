#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int sum = 1;
    for (int i = 1; i<=a; i++) {
        sum *=i;
    }
    printf("%d", sum);
    return 0;
}
