#include <stdio.h>
int main(void) {
    int arr[301][301];
    int a, b;
    scanf("%d %d", &a,&b);
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int n = 0;
    scanf("%d", &n);
    for(int f = 0; f<n; f++){
        int i, j, x, y;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        int tot = 0;
        for(int g = i; g<=x; g++){
            for(int p = j; p<=y; p++){
                tot += arr[g][p];
            }
        }
        printf("%d\n", tot);
    }
    return 0;
}

