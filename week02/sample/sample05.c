#include <stdio.h>

typedef struct node {
    int num;
    struct node *next;
} Node;

int main(void) {
    Node node1 = {5, NULL};
    Node node2 = {9, NULL};
    Node node3 = {3, NULL};
    Node node4 = {7, NULL};

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;

    Node *p = &node1;
        while (p != NULL) {
            printf("%d\n", p->num);
        p = p->next;}
}
