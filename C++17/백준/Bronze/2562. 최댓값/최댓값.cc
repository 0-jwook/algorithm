#include<stdio.h>

int main(void) {
    int a[10];
    int max = 0;
    int num;
    for(int i = 1; i<10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i<10; i++) {
        if (a[i]>max) {
            max = a[i];
            num = i;
        }
    }
    printf("%d\n%d", max, num);
    return 0;
}
