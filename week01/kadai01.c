#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    printf("入力された点数は%d\n", a);

    if (a >= 60) {
        printf("合格\n");
    } else {
        printf("不合格\n");
    }
    return 0;
}
