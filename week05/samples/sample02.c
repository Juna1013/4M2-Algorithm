// マージソート
#include <stdio.h>

void merge(int A[], int left, int mid, int right) { // 要素の併合
    int n1 = mid - left; // 左側の配列の要素数
    int n2 = right - mid; // 右側の配列の要素数
    int L[n1], R[n2]; // 分割した配列をコピーする配列

    // 対象の配列を2分割する
    // 左半分をコピー
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }

    // 右半分をコピー
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    // マージ処理
    int i = 0;
    int j = 0;
    int k = left;

    // 2つの配列を比較しながら統合
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k++] = L[i++];
        } else {
            A[k++] = R[j++];
        }
    }

    // 左側に残りがあればコピー
    while (i < n1) {
        A[k++] = L[i++];
    }

    // 右側に残りがあればコピー
    while (j < n2) {
        A[k++] = R[j++];
    }
}

// マージソート本体
void mergeSort(int A[], int left, int right) {
    // 分割した配列の要素数が1個以下になるまで繰り返す
    if (left + 1 < right) { // 要素が2個以上なら分割
        int mid = (left + right) / 2;
        mergeSort(A, left, mid); // 左側をソート
        mergeSort(A, mid, right); // 右側をソート
        merge(A, left, mid, right); // マージ
    }
}

int main(void) {
    int A[] = {3, 4, 7, 8, 1, 2};
    int N = sizeof(A) / sizeof(A[0]); // 配列の要素数を取得

    printf("ソート前：");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    mergeSort(A, 0, N);

    printf("ソート後：");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
