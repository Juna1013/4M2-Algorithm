// typedefで型に別名をつける
#include <stdio.h>

typedef int seisuu;

int main(void) {
    seisuu i = 10;
    printf("iは%d\n", i);

    return 0;
}