#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    if (N % 5 == 0) {
        printf("5の倍数です\n");
    } else {
        printf("5の倍数ではありません\n");
    }
}
