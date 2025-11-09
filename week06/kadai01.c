// 2分探索
#include <stdio.h>

int binary_search(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // ターゲットが見つかった場合
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) { // ターゲットが中央の値より小さい場合
            left = mid + 1;
        } else { // ターゲットが中央の値より大きい場合
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int result = binary_search(arr, 0, n-1, x);

    if (result != -1) {
        printf("探索要素 %d は%d 番目\n", x, result);
    } else {
        printf("探索要素はありません\n");
    }

    return 0;
}