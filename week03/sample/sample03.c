// 挿入ソートの実装
#include <stdio.h>

int main(void) {
    int A[100];
    int n;
    int i, j, x;

    // 要素数の入力
    printf("要素数を入力してください: ");
    scanf("%d", &n);

    // 配列の入力
    printf("%d個の整数を入力してください: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // 挿入ソート
    for (i = 1; i < n; i++) {
        x = A[i];
        j = i;

        // 左側（探索済み部分）で、A[j-1] > x の間は1つ右へずらす
        while (j > 0 && A[j - 1] > x) {
            A[j] = A[j - 1];
            j = j - 1;
        }

        // 適切な位置にxを挿入
        A[j] = x;
    }

    // 結果の出力
    printf("昇順に整列した結果: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
