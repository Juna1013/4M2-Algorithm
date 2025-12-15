// バブルソート
#include <stdio.h>

int main(void) {
    int A[100];
    int n; // 要素数
    int tmp;

    // 要素数を入力
    printf("要素数を入力してください: ");
    scanf("%d", &n);

    // 配列の入力
    printf("%d個の整数を入力してください: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // バブルソートの実行
    for (int k = 1; k <= n - 1; k++) { // 外側ループ
        for (int i = 0; i <= n - k - 1; i++) { // 内側ループ
            if (A[i] > A[i + 1]) { // 隣り合う要素を比較
                tmp = A[i]; // 交換処理
                A[i] = A[i + 1];
                A[i + 1] = tmp;
            }
        }
    }

    // 結果の出力
    printf("昇順に整列した結果: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
