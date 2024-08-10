#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int result = 0;

    while (n > 0) {
        if (n%5==0) {
            result++;
            n -= 5;
        }else if (n >= 5 && n % 5 >= 3 && (n % 5) % 3 == 0) {
            result++;
            n -= 5;
        } else if (n >= 3) {
            result++;
            n -= 3;
        } else {
            result = -1;
            break;
        }
    }

    if (n != 0) result = -1;

    printf("%d", result);
    return 0;
}
