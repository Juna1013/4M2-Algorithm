// 構造体の使用例
#include <stdio.h>

struct Person {
    char name[16];
    int age;
};

int main(void) {
    struct Person a = {"SUZUKI TARO", 17};
    struct Person b = {"SATO HANAKO", 19};

    printf("名前：%s, 年齢：%d\n", a.name, a.age);
    printf("名前：%s, 年齢：%d\n", b.name, b.age);

    return 0;
}
