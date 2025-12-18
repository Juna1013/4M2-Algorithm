// 2分探索
#include <stdio.h>

int binary_search(int a[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == target) return mid;
        else if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main(void) {
    int a[] = {1, 3, 5, 7, 9, 11};
    int n = 6;
    int target = 7;

    int idx = binary_search(a, n, target);

    if (idx != -1) printf("index = %d\n", idx);
    else printf("not found\n");

    return 0;
}
