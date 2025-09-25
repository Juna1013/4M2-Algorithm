#include <stdio.h>

int main(void) {
    int cnt = 0;
    for (int i = 1; i <= 10; i++) {
        cnt += i;
    }
    printf("%d", cnt);

    return 0;
}
