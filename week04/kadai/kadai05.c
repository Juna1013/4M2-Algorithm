// RPGの冒険者のステータスを出力しよう
#include <stdio.h>

typedef struct {
    char job[30];
    int mp;
} Adventuer;

void print_status(Adventuer job) {
    printf("Job: %s, MP: %d\n", job.job, job.mp);
}

int main(void) {
    Adventuer adventuer = {"冒険者", 120};
    Adventuer wizard = {"ウィザード", 549};
    Adventuer crusader = {"クルセイダー", 50};
    Adventuer priest = {"プリースト", 480};

    print_status(adventuer);
    print_status(wizard);
    print_status(crusader);
    print_status(priest);

    return 0;
}
