#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    int arr[a];
    int sum=0;
    for (int i = 0; i<a; i++) {
        int b;
        scanf("%d", &b);
        for(int j = 0;j<i; j++){
            if (arr[j]==b) {
                sum++;
                break;
            }
        }
        arr[i] = b;
    }
    printf("%d", sum);
    return 0;
}
