// 関数ポインタの配列の例
#include <stdio.h>

void func_dog() {printf("わんわん\n");}
void func_cat() {printf("にゃー\n");}
void func_pig() {printf("ブーブー\n");}

int main(void) {
    void (*pFs[])() = { func_dog, func_cat, func_pig };
    for (int i = 0; i < 3; i++) {
        (*pFs[i])();
    }
}
