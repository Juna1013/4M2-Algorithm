#include <stdio.h>

int main(void) {
    int x = 10;
    int *p;
    p = &x;

    printf("xの値： %d\n", x);
    printf("pが指す値： %d\n", *p);

    return 0;
}
