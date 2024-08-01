#include <stdio.h>
#include <string.h>
int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a*100>=b) {
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}
