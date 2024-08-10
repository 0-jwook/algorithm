#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int b = 0;
    int sum = 0;
    for (int i = 0;  ; i++) {
        if (i==0) {
            b++;
            sum++;
            if (b<=a && a<b+1) {break;}
            
        }else if(i == 1){
            b++;
            sum++;
            if (2<=a && a<8) {break;}
        }else{
            b+=(i-1)*6;
            sum++;
            if (b<=a && a<b+(i)*6) {break;}
        }
    }
    printf("%d", sum);
    return 0;
}

