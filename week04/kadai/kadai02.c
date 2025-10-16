#include <stdio.h>

int main(void) {
    int year = 0;
    printf("西暦を入力してください\n");
    scanf("%d", &year);

    int answer = year - 1925;
    
    printf("西暦%d年は、", year);
    if (year == 1926) {
        printf("昭和元年です\n");
    } else if (year <= 1925) {
        printf("昭和ではありません\n");
    } else {
        printf("昭和%d年です\n", answer);
    }

    return 0;
}
