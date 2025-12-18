// 深さ優先探索
#include <stdio.h>

#define MAX_N 100

// 隣接リスト
int graph[MAX_N][MAX_N];
int graph_size[MAX_N];

// 訪問済み配列
int visited[MAX_N];

// 探索
void dfs(int v) {
    int i;
    visited[v] = 1;
    printf("%d ", v);

    for (i = 0; i < graph_size[v]; i++) {
        int next = graph[v][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main(void) {
    int N = 4;
    int i;

    // 初期化
    for (i = 0; i < N; i++) {
        graph_size[i] = 0;
        visited[i] = 0;
    }

    // 辺の追加（無向）
    graph[0][graph_size[0]++] = 1;
    graph[1][graph_size[1]++] = 0;

    graph[0][graph_size[0]++] = 2;
    graph[2][graph_size[2]++] = 0;

    graph[1][graph_size[1]++] = 3;
    graph[3][graph_size[3]++] = 1;

    graph[2][graph_size[2]++] = 3;
    graph[3][graph_size[3]++] = 2;

    // 探索開始
    dfs(0);

    return 0;
}
