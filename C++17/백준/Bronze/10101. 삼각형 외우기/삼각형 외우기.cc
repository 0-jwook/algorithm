#include<stdio.h>
#include<string.h>

int main(void) {
    int a[4];
    for (int i = 0; i<3; i++) {
        scanf("%d", &a[i]);
        }
    if (a[0]+a[1]+a[2] == 180) {
        if (a[0]==a[1]&&a[1]==a[2]) {
            printf("Equilateral");
        }else if(a[0]==a[1]&&a[0]!=a[2]){
            printf("Isosceles");
        }else if(a[0]==a[2]&&a[0]!=a[1]){
            printf("Isosceles");
        }else if (a[1]==a[2]&&a[1]!=a[0]){
            printf("Isosceles");
        }else if (a[0]!=a[1]&&a[1]!=a[2]){
            printf("Scalene");
        }
    }else{
        printf("Error");
    }
    return 0;
}
