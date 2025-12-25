// 動的計画法
#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    int weight;
    int value;
} Item;

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main(void) {
    Item items[] = {
        {"スマートフォン", 1, 1, 40000},
        {"ゲーム機", 2, 2, 20000},
        {"ノートパソコン", 3, 3, 100000},
        {"デジタルカメラ", 4, 10, 150000}
    };

    int n = 4;
    int capacity = 12;

    // DPテーブルの作成
    int dp[5][13];

    // 表を0で初期化
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) dp[i][w] = 0;
    }

    // 表を埋めていく（動的計画法の計算）
    for (int i = 1; i <= n; i++) {
        int weight = items[i-1].weight;
        int value = items[i-1].value;

        for (int w = 0; w <= capacity; w++) {
            if (w >= weight) {
                int val_if_add = dp[i-1][w - weight] + value;
                int val_if_not = dp[i-1][w];

                dp[i][w] = max(val_if_add, val_if_not);
            } else dp[i][w] = dp[i-1][w];
        }
    }

    // 最も価値の高い出力
    printf("動的計画法による結果（上限 %dkg）\n", capacity);
    printf("最大合計金額: %d\n", dp[n][capacity]);

    // どの荷物を選んだか逆算する（バックトラッキング）
    printf("選んだ荷物の内訳\n");
    int current_w = capacity;
    int total_weight = 0;
    
    // 最後の荷物から先頭に向かってチェック
    for (int i = n; i >= 1; i--) {
        if (dp[i][current_w] > dp[i-1][current_w]) {
            Item selected = items[i-1];
            printf("選択: %s（重さ: %dkg, 価格: %d）\n", selected.name, selected.weight, selected.value);

            current_w -= selected.weight;
            total_weight += selected.weight;
        }
    }

    printf("合計の重さ: %dkg\n", total_weight);
    
    return 0;
}
