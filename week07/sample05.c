// クイックソート（過去問の確認）
#include <stdio.h>

void QuickSort(int data[], int lower, int upper) {
    int pivot, tmp, i, j;
    i = lower;
    j = upper;
    pivot = data[(lower + upper) / 2]; // A
    do {
        while (data[i] < pivot) i++; // B
        while (pivot < data[j]) j--; // C
        if (i <= j) {
            tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);

    if (lower < j) { // D
        QuickSort(data, lower, j);
    }
    if (i < upper) { // E
        QuickSort(data, i, upper);
    }
}

int main(void) {
    int data[] = {5, 6, 4, 2, 1, 3};
    printf("ソート後：");
    QuickSort(data, 0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}