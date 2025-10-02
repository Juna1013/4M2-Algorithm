// 列挙型
#include <stdio.h>

int main(void) {
    int subject = 0;

    enum Subject {
        Japanese,
        math,
        science
    };

    switch (subject) {
        case Japanese:
            printf("国語\n");
            break;
        case math:
            printf("数学\n");
            break;
        case science:
            printf("理科\n");
        default:
            printf("1~3を入力してください\n");
            break;
    }
}
