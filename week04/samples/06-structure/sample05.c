// 値渡しとアドレス渡し
#include <stdio.h>

typedef struct {
    char name[16];
    int age;
} Person;

void func1(Person p) {
    printf("func1の実行結果：%d\n", p.age);
}

void func2(Person *p) {
    printf("func2の実行結果①：%d\n", (*p).age);
    (*p).age++;
    printf("func2の実行結果②：%d\n", (*p).age);
}

int main(void) {
    Person a = {"SUZUKI TARO", 17};
    func1(a);
    func2(&a);

    return 0;
}
