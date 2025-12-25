// バックトラック法
#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    int weight;
    int value;
} Item;

Item items[] = {
    {"スマートフォン", 1, 1, 40000},
    {"ゲーム機", 2, 2, 20000},
    {"ノートパソコン", 3, 3, 100000},
    {"デジタルカメラ", 4, 10, 150000}
};
int n = 4;
int capacity = 12;

int max_value = 0;
int best_select[10];
int current_select[10];
