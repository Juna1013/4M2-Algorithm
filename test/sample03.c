// クイックソート
#include <stdio.h>

void QuickSort(int S[], int lower, int upper) {
    if (lower >= upper) return; // ベースケース：要素が1個以下の場合は何もしない
    
    int i = lower; // 左側の探索インデックス
    int j = upper; // 右側の探索インデックス
    int pivot_index = (lower + upper) / 2; // ピボットのインデックス
    int pivot = S[pivot_index]; // ピボット値
    int tmp; // 値の入れ替え用変数

    // ピボットを基準に小と大に振り分ける
    do {
        // 左側からpivot以上の要素が出るまで右へ進める
        while (S[i] < pivot) i++;

        // 右側からpivot以下の要素が出るまで左へ戻す
        while (S[j] > pivot) j--;

        // iとjが交差する前に、左右で値が逆転していれば入れ替え
        if (i <= j) {
            tmp = S[i];
            S[i] = S[j];
            S[j] = tmp;
            i++;
            j--;
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

    printf("ソート前: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    QuickSort(A, 0, n - 1);

    printf("ソート後: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
