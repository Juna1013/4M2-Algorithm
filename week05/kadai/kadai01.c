// クイックソート
#include <stdio.h>

void QuickSort(int *S, int lower, int upper) {
    int i = lower;
    int j = upper;
    int pivot = S[(lower + upper) / 2];
    int tmp;

    do {
        while(S[i] < pivot) i++;
        while(S[j] > pivot) j--;

        if (i <= j) {
            tmp = S[i];
            S[i] = S[j];
            S[j] = tmp;
            i++;
            j--;
        } 
    } while(i <= j);

    // 再帰呼び出し
    if (lower < j) QuickSort(S, lower, j);
    if (i < upper) QuickSort(S, i, upper);
}

int main(void) {
    int A[5] = {4, 1, 3, 5, 2};
    int n = 5;

    QuickSort(A, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
