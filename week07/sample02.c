// 選択ソート
#include <stdio.h>

int main(void) {
    int A[100];
    int n; // 要素数
    int m, tmp;

    // 要素数の入力
    printf("要素数を入力してください: ");
    scanf("%d", &n);

    // 配列の入力
    printf("%d個の整数を入力してください: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // 選択ソート
    for (int k = n - 1; k >= 1; k--) { // 末尾側から整列
        m = 0; // 最大値の位置を仮に0番目とする
        for (int i = 1; i <= k; i++) { // A[0] ~ A[k]の中で最大値を探す
            if (A[i] > A[m]) {
                m = i; // より大きい値を見つけたら更新
            }
            // 最大値A[m]をA[k]と交換
            tmp = A[m];
            A[m] = A[k];
            A[k] = tmp;
        }
    }

    // 結果を出力
    printf("昇順に整列した結果: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
