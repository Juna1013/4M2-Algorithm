#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    if (N % 2 == 0) {
        printf("2の倍数です\n");
    } else {
        printf("2の倍数ではありません\n");
    }
    return 0;
}
