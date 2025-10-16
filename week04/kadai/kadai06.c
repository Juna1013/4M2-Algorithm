// 構造体へのポインタを使って関数を作成しよう
#include <stdio.h>

typedef struct {
    char job[30];
    int mp;
} Adventurer;

void attack(Adventurer *adventurer) {
    adventurer->mp -= 5;
}

int main(void) {
    Adventurer adventurer = {"冒険者", 120};
    Adventurer wizard = {"ウィザード", 549};
    Adventurer crusader = {"クルセイダー", 50};
    Adventurer priest = {"プリースト", 480};

    Adventurer adventurers[4];
    adventurers[0] = adventurer;
    adventurers[1] = wizard;
    adventurers[2] = crusader;
    adventurers[3] = priest;

    for (int i = 0; i < 4; i++) {
        printf("%sは魔王を撃破した!\n", adventurers[i].job);
        attack(&adventurers[i]);
        printf("残りのMP: %d\n", adventurers[i].mp);
    }

    return 0;
}
