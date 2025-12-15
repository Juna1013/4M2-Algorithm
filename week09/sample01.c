// 逐次探索（線形探索）
#include <stdio.h>

int main(void) {
    int data[] = {4, 2, 9, 5, 1};
    int target = 9; // 探したい数字

    for (int i = 0; i < 5; i++) {
        if (data[i] == target) {
            printf("%d番目です\n", i + 1);
            return 0;
        }
    }

    // 見つからなかった場合
    printf("見つかりませんでした\n");

    return 0;
}
