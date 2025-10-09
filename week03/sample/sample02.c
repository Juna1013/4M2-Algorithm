// セレクションソートの実装
#include <stdio.h>

int main(void) {
    int A[100]; // 整列する配列（最大100個）
    int n; // 要素数
    int i, k, m, tmp;

    // 要素数の入力
    printf("要素数を入力してください: ");
    scanf("%d", &n);

    // 配列の入力
    printf("%d個の整数を入力してください: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // セレクションソート（選択ソート）
    for (k = n - 1; k >= 1; k--) { // 末尾側から整列
        m = 0; // 最大値の位置を仮に0番目とする
        for (i = 1; i <= k; i++) { // A[0] ~ A[k]の中で最大値を探す
            if (A[i] > A[m]) {
                m = i; // より大きい値を見つけたら更新
            }
        }
        // 最大値A[m]をA[k]と交換
        tmp = A[m];
        A[m] = A[k];
        A[k] = tmp;
    }

    // 結果の出力
    printf("昇順に整列した結果: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
