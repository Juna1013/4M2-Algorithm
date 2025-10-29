// 関数ポインタを使用する例
#include <stdio.h>

void func(int a) {
    printf("func関数が呼び出されました。引数の値は%d\n", a);
}

int main(void) {
    void (*p)(int) = func;
    (*p)(10);

    return 0;
}
