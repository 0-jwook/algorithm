#include <stdio.h>

int main(void) {
    int num[31] = {0,};
    int j;
    for (int i = 0; i<28; i++) {
        scanf("%d", &j);
        num[j] = 1;
    }
    for (int i = 1; i<31; i++) {
        if (num[i]==0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}
