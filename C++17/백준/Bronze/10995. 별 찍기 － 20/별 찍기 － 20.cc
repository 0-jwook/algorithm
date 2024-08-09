#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    
    for (int i = 0; i<a; i++) {
        if (i % 2 == 0) {
            for (int j  = 0; j<a; j++) {
                printf("* ");
            }
            printf("\n");
        }else{
            printf(" ");
            for (int j  = 0; j<a; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
