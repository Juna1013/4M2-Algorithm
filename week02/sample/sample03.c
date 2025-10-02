// ポインタを利用して配列の値を書き換える
#include <stdio.h>

int main(void) {
    int data[] = {1, 2, 3, 4, 5};
    int *p1, *p2;

    p1 = &data[2]; // 配列の3番目の要素のアドレスを取得
    *p1 = 30; // 配列の3番目の要素の値を変更

    printf("%d", data[2]);
    return 0;
}
