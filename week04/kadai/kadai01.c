#include <stdio.h>

int main(void) {
    int omikuji = 0;
    printf("omikuji変数を入力してください\n");
    scanf("%d", &omikuji);

    if (omikuji <= 29) {
        printf("大吉\n");
    } else {
        printf("大凶\n");
    }

    return 0;
}
