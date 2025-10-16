// ポインタを使った値の参照
#include <stdio.h>

int main(void) {
    int i = 5;
    int *p = &i;

    printf("iのアドレスは%p\n", &i);
    printf("pの値は%p\n", p);
    printf("iの値は%d\n", i);
    printf("*pの値は%d\n", *p);

    return 0;
}
