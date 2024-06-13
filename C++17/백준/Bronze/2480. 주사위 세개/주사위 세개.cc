#include<stdio.h>
#include<string.h>

int main(void) {
    int dice[3];
    int max=0;
    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);
    if (dice[0]==dice[1] && dice[1]==dice[2] && dice[2]==dice[0]) {
        printf("%d", 10000+dice[0]*1000);
    }else if (dice[0]==dice[1] && dice[0]!=dice[2] && dice[1]!=dice[2]){
        printf("%d", 1000+dice[0]*100);
    }else if(dice[0]==dice[2] && dice[0]!= dice[1] && dice[1]!=dice[2]){
        printf("%d", 1000+dice[0]*100);
    }else if(dice[1]==dice[2] && dice[1]!=dice[0] && dice[2] != dice[0]){
        printf("%d", 1000+dice[1]*100);
    }else{
        for (int i = 0; i<3; i++) {
            if (max<dice[i]) {
                max = dice[i];
            }
        }
        printf("%d", max*100);
    }
    return 0;
}
