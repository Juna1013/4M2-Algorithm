// enqueue と dequeue でキューをC言語で実装
#include <stdio.h>

#define N 10
typedef int data_t;

data_t queue[N];
int head;
int tail;

void init(void) {
    head = 0;
    tail = 0;
}

void enqueue(data_t x) {
    if (tail >= N) {
        printf("queue overflow\n");
        return;
    }
    queue[tail] = x;
    tail++;
}

void dequeue(data_t *x) {
    if (head == tail) {
        printf("queue underflow\n");
        return;
    }

    *x = queue[head];
    head++;
}

int main(void) {
    // キューの初期化
    init();

    // キューに値を追加
    enqueue(10);
    enqueue(20);

    // キューから値を取り出す
    int x;
    dequeue(&x);
    printf("%d\n", x);
    dequeue(&x);
    printf("%d\n", x);
}
