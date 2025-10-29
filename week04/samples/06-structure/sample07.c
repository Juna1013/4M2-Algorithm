// 構造体と配列
#include <stdio.h>

typedef struct {
    char name[16];
    int age;
} Person;

int main(void) {
    Person p[] = {{"SUZUKI TARO", 17}, {"SATO HANAKO", 19}};

    for (int i = 0; i < 2; i++) {
        printf("名前：%s, 年齢：%d\n", p[i].name, p[i].age);
    }

    return 0;
}