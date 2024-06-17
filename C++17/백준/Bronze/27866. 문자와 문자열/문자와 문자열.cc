#include<stdio.h>

int main(void) {
    char a[1000];
    int num;
    scanf("%s", a);
    scanf("%d", &num);
    printf("%c",a[num-1]);
    return 0;
}

