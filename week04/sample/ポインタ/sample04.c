// ポインタを引数とする関数
#include <stdio.h>

void func(int *p) {
    *p = 100;
}

int main(void) {
    int i = 5;
    func(&i);
    printf("iの値は%d\n", i);
}
