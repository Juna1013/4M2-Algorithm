#include <stdio.h>
enum Weekday { MON=1, TUE, WED, THU, FRI };

int main(void) {
    enum Weekday today = WED;
    printf("%d\n", today);
    return 0;
}