// 値を交換するswap関数
#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a = 2;
    int b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("swap関数を呼び出します\n");
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
