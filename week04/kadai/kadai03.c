#include <stdio.h>

int main(void) {
    int cnt = 20;

    while (cnt >= 10) {
        printf("%d\n", cnt);
        cnt -= 2;
    }

    return 0;
}
