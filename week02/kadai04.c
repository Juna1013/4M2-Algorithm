#include <stdio.h>

struct Student {
    char name[20];
    int number;
};

int main(void) {
    struct Student s1 = {"Taro", 1001};
    printf("名前： %s, 学籍番号： %d\n", s1.name, s1.number);
    return 0;
}
