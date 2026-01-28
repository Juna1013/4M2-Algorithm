#include <stdio.h>

int main() {
    int coins[] = {500, 100, 50, 10, 5, 1};
    int n = 620; // 合計金額
    int count = 0;

    for (int i = 0; i < 6; i++) {
        count += n / coins[i];
        n = n % coins[i];
    }

    printf("最小枚数: %d\n", count);
    return 0;
}
