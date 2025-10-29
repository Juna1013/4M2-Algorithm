// ポインタ変数のインクリメント
#include <stdio.h>

int main(void) {
    int scores[] = {10, 20, 30};
    int *p = scores;

    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d", *p);

    return 0;
}
