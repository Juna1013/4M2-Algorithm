#include <stdio.h>
#include <math.h>

int main(void) {
    double x_1 = 0.0;
    double y_1 = 0.0;
    double x_2 = 1.0;
    double y_2 = 1.0;

    // ユークリッド距離を計算
    double dx = x_2 - x_1;
    double dy = y_2 - y_1;
    double distance = sqrt(dx * dx + dy * dy);

    // ユークリッド距離を表示
    printf("2点の距離は：%lf\n", distance);

    return 0;
}
