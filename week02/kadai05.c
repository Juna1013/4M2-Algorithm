#include <stdio.h>
#include <stdlib.h>

// ノード構造体
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ノード生成関数
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// リストの表示
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("(%d) -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // 初期リスト： 5 -> 9 -> 3
    Node* head = createNode(5);
    head->next = createNode(9);
    head->next->next = createNode(3);

    printf("挿入前: ");
    printList(head);

    // 9の後ろに7を挿入
    Node* newNode = createNode(7);
    newNode->next = head->next->next;
    head->next->next = newNode;

    printf("挿入後: ");
    printList(head);

    return 0;
}
