#include <stdio.h>
#include <string.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        int b;
        char c[21];
        scanf("%d %s", &b, c);
        int len = strlen(c);
        for (int j = 0; j < len; j++) {
            for (int p = 0; p < b; p++) {
                printf("%c", c[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
