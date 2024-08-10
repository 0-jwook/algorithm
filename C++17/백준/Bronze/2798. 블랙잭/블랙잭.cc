#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int p = j + 1; p < n; p++) {
                int sum = a[i] + a[j] + a[p];
                if (sum <= m && sum > max){
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}
