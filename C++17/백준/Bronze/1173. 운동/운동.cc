#include <stdio.h>
int main(void){
    int N;
    int m;
    int M;
    int T;
    int R;
    
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    int work=0;
    int rest=0;
    int sum=0;
    int nowm = m;
    if (M-m < T) {
        printf("-1");
        return 0;
    }
    for (;;) {
        if (work == N) {
            printf("%d", sum);
            break;
        }else{
            if (nowm+T<=M) {
                work+= 1;
                sum+= 1;
                nowm+= T;
            }else if (nowm>m){
                nowm-=R;
                sum+=1;
                rest+=1;
                if (nowm<m) {
                    nowm = m;
                }
            }
        }
    }
    return 0;
}
