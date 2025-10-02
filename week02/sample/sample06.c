// Push と Pop を用いてスタックをC言語を実装
#include <stdio.h>

#define N 10
typedef int data_t;

data_t stack[N];
int size;

void init(void) {
    size = 0;
}

void push(data_t x) {
    if (size >= N) {
        printf("stack overflow\n");
        return;
    }
    stack[size] = x;
    size++;
}

void pop(data_t *x) {
    if (size <= 0) {
        printf("stack underflow\n");
        return;
    }

    *x = stack[size - 1];
    size--;
}

int main(void) {
    // スタックの初期化
    init();

    // スタックに値を追加
    push(40);
    push(50);

    // スタックから値を取り出す
    int x;
    pop(&x);
    printf("%d\n", x);
    pop(&x);
    printf("%d\n", x);
}
