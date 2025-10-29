// 構造体と関数（1）
#include <stdio.h>

typedef struct {
    char name[16];
    int age;
} Person;

void print_info(Person p) {
    printf("名前：%s, 年齢：%d\n", p.name, p.age);
}

int main(void) {
    Person a = {"SUZUKI TARO", 17};
    print_info(a);
    
    return 0;
}
