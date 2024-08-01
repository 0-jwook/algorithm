#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int a = n/4;
    for (int i = 0; i<a; i++) {
        printf("long ");
    }
    printf("int");
   return 0;
}
