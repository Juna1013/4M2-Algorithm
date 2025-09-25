#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // スペースを出力
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // アスタリスクを出力
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");  // 行末で改行
    }

    return 0;
}
