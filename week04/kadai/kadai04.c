#include <stdio.h>

void add_one(int x) {
    x++;
    printf("%d\n", x);
}

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;

    add_one(a);
    add_one(b);
    add_one(c);

    return 0;
}
