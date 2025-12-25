// 貪欲法
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50]; // 名前
    int id; // 番号
    int weight; // 重さ
    int value; // 価格
    double vpw; // 1kgあたりの価格
} Item;

int main(void) {
    Item items[] = {
        {"スマートフォン", 1, 1, 40000, 0.0},
        {"ゲーム機", 2, 2, 20000, 0.0},
        {"ノートパソコン", 3, 3, 100000, 0.0},
        {"デジタルカメラ", 4, 10, 150000, 0.0}
    };

    int n = 4; // 荷物の個数
    int capacity = 12; // カバンに入る上限の重量
    int current_weight = 0; // 現在の重さ
    int total_value = 0; // 現在の合計金額

    // 1kgあたりの価格を計算
    for (int i = 0; i < n; i++) items[i].vpw = (double)items[i].value / items[i].weight;

    // vpwが高い順にバブルソート
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (items[j].vpw < items[j + 1].vpw) {
                // 順番を入れ替える
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }

    // 高い順に選んでいく（capacityの範囲で）
    printf("選択結果（上限 %dkg）\n", capacity);

    for (int i = 0; i < n; i++) {
        if (current_weight + items[i].weight <= capacity) {
            current_weight += items[i].weight;
            total_value += items[i].value;

            printf("選択: %s（重さ: %dkg, 価格: %d）\n", items[i].name, items[i].weight, items[i].value);
        } else printf("却下: %s（重さ: %dkg）-> 容量を超えているため\n", items[i].name, items[i].weight);
    }

    printf("合計の重さ: %dkg\n", current_weight);
    printf("合計金額: %d\n", total_value);

    return 0;
}
