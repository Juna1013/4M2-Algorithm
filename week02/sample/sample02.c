// ポインタを利用して値を書き換える
#include <stdio.h>

int main(void) {
    int x = 10;
    int *p1 = &x; // アドレスの値を代入
    printf("%d\n", *p1); // xの値を40に変更

    *p1 = 40;
    printf("%d\n", *p1);

    return 0;
}
