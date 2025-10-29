// ポインタが指す先を変更する
#include <stdio.h>

int main(void) {
    int i = 5;
    int j = 8;

    int *p = &i;
    printf("*pの値は%d\n", *p);

    p = &j;
    printf("*pの値は%d\n", *p);

    return 0;
}
