#include <stdio.h>

int main(void) {
    int a[8]; // 배열 크기를 8로 변경
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i]); // &a[i]로 수정
    }
    
    int ad = 0; // 변수 초기화
    int ap = 0; // 변수 초기화
    
    if (a[0] == 1) { // 첫 번째 요소가 1인 경우
        for (int i = 0; i < 7; i++) { // 마지막 요소를 비교할 필요가 없으므로 7까지만 반복
            if (a[i] + 1 == a[i + 1]) {
                ad++;
            } else {
                break; // 하나라도 일치하지 않으면 중단
            }
        }
        if (ad == 7) { // 모든 요소가 연속적으로 증가하는 경우
            printf("ascending\n");
        } else {
            printf("mixed\n");
        }
    } else if (a[0] == 8) { // 첫 번째 요소가 8인 경우
        for (int i = 0; i < 7; i++) { // 마지막 요소를 비교할 필요가 없으므로 7까지만 반복
            if (a[i] - 1 == a[i + 1]) {
                ap++;
            } else {
                break; // 하나라도 일치하지 않으면 중단
            }
        }
        if (ap == 7) { // 모든 요소가 연속적으로 감소하는 경우
            printf("descending\n");
        } else {
            printf("mixed\n");
        }
    } else { // 첫 번째 요소가 1 또는 8이 아닌 경우
        printf("mixed\n");
    }
    
    return 0;
}
