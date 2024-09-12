#include <stdio.h>

#define MAX_VALUE 10001  // 문제에서 입력 가능한 최대 값 + 1

int main() {
    int n;
    scanf("%d", &n);  // 입력 개수

    int count[MAX_VALUE] = {0};  // 각 숫자의 빈도를 저장할 배열 (모든 값은 0으로 초기화)

    // 숫자 입력과 빈도 계산
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;  // 해당 숫자의 빈도 증가
    }

    // 정렬된 결과 출력
    for (int i = 0; i < MAX_VALUE; i++) {
        while (count[i] > 0) {  // 숫자가 존재할 경우
            printf("%d\n", i);
            count[i]--;  // 출력한 숫자의 빈도를 감소
        }
    }

    return 0;
}
