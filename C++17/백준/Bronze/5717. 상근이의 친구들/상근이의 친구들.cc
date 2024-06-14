#include<stdio.h>
#include<string.h>

int main(void) {
    for (;;) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a==0 && b==0) {
            break;
        }else{
            printf("%d\n", a+b);
        }
        
    }
    return 0;
}
