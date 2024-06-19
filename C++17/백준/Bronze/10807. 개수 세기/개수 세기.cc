#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int num[a];
    int sum;
    int count = 0;
    for (int i = 0; i<a; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &sum);
    for (int i = 0; i<a; i++) {
        if (num[i] == sum) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

