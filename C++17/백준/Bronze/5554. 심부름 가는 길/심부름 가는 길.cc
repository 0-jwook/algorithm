#include<stdio.h>
#include<string.h>

int main(void) {
    int sum = 0;
    for (int i = 0; i<4; i++) {
        int a;
        scanf("%d", &a);
        sum = sum+a;
    }
    printf("%d\n", sum/60);
    printf("%d\n", sum%60);
    return 0;
}
