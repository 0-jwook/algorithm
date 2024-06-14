#include<stdio.h>
#include<string.h>

int main(void) {
    int num[4];
    for (int i = 1; i<=3; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 1; i<3; i++) {
        for(int j = 1; j<=2; j++){
            int temp;
            if (num[j]>num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    printf("%d %d %d", num[1], num[2], num[3]);
    return 0;
}
