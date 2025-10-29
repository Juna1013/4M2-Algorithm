// const修飾子
#include <stdio.h>

typedef struct {
    char name[16];
    int age;
} Person;

void func(const Person *p) {
    p->age++;
}

int main(void) {
    const int a = 10;
    a++;
    func(&a);

    return 0;
}
