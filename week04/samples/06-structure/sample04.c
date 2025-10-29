// 構造体と関数（2）
#include <stdio.h>

typedef struct {
    char name[16];
    int age;
} Person;

void birthday(Person *p) {
    (*p).age++;
}

int main(void) {
    Person a = {"SUZUKI TARO", 17};
    birthday(&a);
    printf("名前：%s, 年齢：%d\n", a.name, a.age);

    return 0;
}