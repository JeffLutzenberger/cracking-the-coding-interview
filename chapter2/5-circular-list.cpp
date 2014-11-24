#include <stdio.h>
#include <string.h>
#include "node.cpp"

void has_cycle(Node* tip) {
    Node* p1 = tip;
    Node* p2 = tip->next;

    while(p2 != NULL) {
        if(p1 == p2){ 
            printf("Cycle found!\n");
            return;
        }
        p1 = p1->next;
        if(p2->next == NULL) break;
        p2 = p2->next->next;
    }
    printf("Cycle not found\n");

}
int main() {
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n4;

    has_cycle(n1);
    n7->next = NULL;
    has_cycle(n1);

    return 1;
}
