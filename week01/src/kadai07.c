#include <stdio.h>
#include <string.h>

int main(void) {
    char A[100];
    scanf("%s", A);

    for (int i = 0; i < 100; i++) {
        if (A[i] == 'a') {
            printf("%d", i + 1);
            return 0;
        }
    }
}
