#include <stdio.h>

// 配列の要素を入れ替える関数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ヒープの整列（最大ヒープを構築する）
void heapify(int A[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // 左の子が親より大きければ
    if (left < n && A[left] > A[largest]) {
        largest = left;
    }

    // 右の子が現在より大きければ
    if (right < n && A[right] > A[largest]) {
        largest = right;
    }

    // 最大値でない場合、入れ替えて再帰
    if (largest != i) {
        swap(&A[i], &A[largest]);
        heapify(A, n, largest);
    }
}

// ヒープソート本体
void heapSort(int A[], int n) {
    // 1. 配列を最大ヒープに変換
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(A, n, i);
    }

    // 2. ヒープから要素を取り出してソート
    for (int i = n - 1; i > 0; i--) {
        // ルート（最大値）と末尾を入れ替え
        swap(&A[0], &A[i]);

        // ヒープのサイズを減らして再ヒープ化
        heapify(A, i, 0);
    }
}

// 配列表示用関数
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);

    printf("入力配列：");
    printArray(A, n);

    heapSort(A, n);

    printf("昇順に整列：");
    printArray(A, n);

    return 0;
}
