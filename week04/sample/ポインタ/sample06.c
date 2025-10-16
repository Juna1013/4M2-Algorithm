// 配列の要素のアドレス
#include <stdio.h>

int main(void) {
    int scores[3] = {10, 20, 30};

    printf("scores[0]のアドレス：%p\n", &scores[0]);
    printf("scores[1]のアドレス：%p\n", &scores[1]);
    printf("scores[2]のアドレス：%p\n", &scores[2]);
}
