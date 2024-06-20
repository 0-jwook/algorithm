#include <stdio.h>
#include <string.h>

int main(void) {
    int a;
    int b = 0;
    scanf("%d", &a);
    while (a>0) {
        if (a>=3) {
            a-=3;
            b++;
        }else if (3>a){
            a-=1;
            b++;
        }
    }
    if (b%2 == 0) {
        printf("CY");
    }else{
        printf("SK");
    }
    return 0;
}
