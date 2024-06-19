#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int we, wr;
    for (int i = 0; i<a; i++) {
        scanf("%d %d", &we, &wr);
        printf("%d\n", we+wr);
    }
    return 0;
}
