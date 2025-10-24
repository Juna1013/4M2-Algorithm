// クイックソート
#include <stdio.h>

void QuickSort(int S[], int lower, int upper) {
    int i = lower; // 左側の探索インデックス
    int j = upper; // 右側の探索インデックス
    int mid = S[(lower + upper) / 2]; // ピボット（中央の要素を採用）
    int temp; // 値の入れ替え用変数

    // ピボットを基準に小と大に振り分ける
    do {
        // 左側からmid以上の要素が出るまで右へ進める
        while (S[i] < mid) i++;

        // 右側からmid以下の要素が出るまで左へ戻す
        while (S[j] > mid) j--;

        // iとjが交差する前に、左右で値が逆転していれば入れ替え
        if (i <= j) {
            temp = S[i];
            S[i] = S[j];
            S[j] = temp;
            i++; // 次の位置へ
            j--; // 次の位置へ
        }
    } while (i <= j); // 左右の探索が交差するまで繰り返す

    // 再帰的呼び出し
    // 左側にまだ要素が残っていれば左部分をソート
    if (lower < j) {
        QuickSort(S, lower, j);
    }

    // 右側にまだ要素が残っていれば右部分をソート
    if (i < upper) {
        QuickSort(S, i, upper);
    }
}

int main(void) {
    int A[] = {35, 12, 43, 8, 51, 26, 19};
    int n = sizeof(A) / sizeof(A[0]);

    printf("ソート前：");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    QuickSort(A, 0, n - 1);

    printf("ソート後：");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
