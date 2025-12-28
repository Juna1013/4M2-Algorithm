// バックトラック法
#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    int weight;
    int value;
} Item;

Item items[] = {
    {"スマートフォン", 1, 1, 40000},
    {"ゲーム機", 2, 2, 20000},
    {"ノートパソコン", 3, 3, 100000},
    {"デジタルカメラ", 4, 10, 150000}
};
int n = 4;
int capacity = 12;

int max_value = 0;
int best_select[10];
int current_select[10];

void backtrack(int i, int current_w, int current_v) {
    if (i == n) {
        if (current_v > max_value) {
            max_value = current_v;
            for (int k = 0; k < n; k++) best_select[k] = current_select[k];
        }
        return;
    }

    if (current_w + items[i].weight <= capacity) {
        current_select[i] = 1;
        backtrack(i + 1, current_w + items[i].weight, current_v + items[i].value);
    }

    current_select[i] = 0;
    backtrack(i + 1, current_w, current_v);
}

int main(void) {
    for (int i = 0; i < n; i++) {
        best_select[i] = 0;
        current_select[i] = 0;
    }

    backtrack(0, 0, 0);

    printf("バックトラック法による結果（上限 %dkg）\n", capacity);
    printf("最大合計金額: %d\n", max_value);

    printf("選んだ荷物の内訳\n");
    int total_weight = 0;

    for (int i = 0; i < n; i++) {
        if (best_select[i] == 1) {
            printf("選択: %s（重さ: %dkg, 価格: %d）\n", items[i].name, items[i].weight, items[i].value);
            total_weight += items[i].weight;
        }
    }

    printf("合計の重さ: %dkg\n", total_weight);

    return 0;
}
