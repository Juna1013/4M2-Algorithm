// マージソート
#include <stdio.h>

// マージ処理（2つのソート済み配列を1つに統合）
void Merge(int A[], int left, int mid, int right) {
    int i = left; // 左側の開始位置
    int j = mid + 1; // 右側の開始位置
    int k = 0; // 一時配列のインデックス
    int temp[100]; // 一時配列

    // 両方の部分配列に要素がある間、比較して小さい方を先に入れる
    while (i <= mid && j <= right) {
        if (A[i] < A[j]) {
            temp[k++] = A[i++];
        } else {
            temp[k++] = A[j++];
        }
    }

    // 左側に残りがある場合
    while (i <= mid) {
        temp[k++] = A[i++];
    }

    // 右側に残りがある場合
    while (j <= right) {
        temp[k++] = A[j++];
    }

    // temp配列をAに戻す
    for (i = 0; i < k; i++) {
        A[left + i] = temp[i];
    }
}

// 分割して再帰的にマージソート
void MergeSort(int A[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        MergeSort(A, left, mid);
        MergeSort(A, mid + 1, right);
        Merge(A, left, mid, right);
    }
}

int main() {
    int A[6] = {38, 27, 43, 3, 9, 82};
    int n = 6;

    printf("入力配列：");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    MergeSort(A, 0, n - 1);

    printf("昇順に整列：");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}
