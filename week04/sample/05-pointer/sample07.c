// ポインタに対する加算
#include <stdio.h>

int main(void) {
    int scores[] = {10, 20, 30};
    int *p = scores;

    printf("*pの値は%d\n", *p);
    printf("*(p + 1) の値は%d\n", *(p + 1));
    printf("*(p + 2) の値は%d\n", *(p + 2));
}
