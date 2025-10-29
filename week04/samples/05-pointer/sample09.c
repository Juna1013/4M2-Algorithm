// 関数の引数に配列を使う
#include <stdio.h>

void func(int *p) {
    p[0] = 98;
    p[1] = 99;
    p[2] = 100;
}

int main(void) {
    int scores[] = {10, 20, 30};
    func(scores);

    for (int i = 0; i < 3; i++) {
        printf("scores[%d]の値は%d\n", i, scores[i]);
    }
}
