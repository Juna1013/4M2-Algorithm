// ヒープソート
#include <stdio.h>

// 要素を入れ替える
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// ヒープの性質を保つ（最大ヒープ化）
void heapify(int A[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // 左の子が存在し、親より大きい場合
    if (left < n && A[left] > A[largest]) {
        largest = left;
    }

    // 右の子が存在し、現在の最大より大きい場合
    if (right < n && A[right] > A[largest]) {
        largest = right;
    }

    // 最大値が親でない場合、入れ替え & 再帰
    if (largest != i) {
        swap(&A[i], &A[largest]);
        heapify(A, n, largest);
    }
}

// ヒープソート本体
void heapSort(int A[], int n) {
    // 最大ヒープを作成
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(A, n, i);
    }

    // ルートろ末尾を入れ替え、ヒープを縮めて再整列
    for (int i = n - 1; i > 0; i--) {
        swap(&A[0], &A[i]);
        heapify(A, i, 0);
    }
}

int main() {
    int A[6] = {4, 10, 3, 5, 1};
    int n = 5;

    printf("入力配列：");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    heapSort(A, n);

    printf("昇順に整列：");
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}
