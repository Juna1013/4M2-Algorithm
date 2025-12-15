// 番兵法
#include <stdio.h>

int main(void) {
    int data[6] = {4, 2, 9, 5, 1};

    int n = 5; // 実際のデータの数
    int target = 9; // 探したい数

    data[n] = target;

    // 探索
    int i = 0;
    while(data[i] != target) i++;

    // 判定
    if (i < n) printf("%d番目です\n", i + 1);
    else printf("見つかりませんでした\n");

    return 0;
}
