// シェルソートの実装
#include <stdio.h>

int main(void) {
    int A[100];
    int n;
    int i, j, gap, tmp;

    // 要素数の入力
    printf("要素数を入力してください: ");
    scanf("%d", &n);

    // 配列の入力
    printf("%d個の整数を入力してください: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // シェルソート
    for (gap = n / 2; gap > 0; gap = gap / 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && A[j] > A[j + gap]; j = j - gap) {
                // A[j] と A[j + gap] を交換
                tmp = A[j];
                A[j] = A[j + gap];
                A[j + gap] = tmp;
            }
        }
    }

    // 結果の出力
    printf("昇順に整列した結果: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
