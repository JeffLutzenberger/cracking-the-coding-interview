#include <stdio.h>
#include <string.h>
#include "node.cpp"

void nth_to_last(Node* tip, int nth) {
    //set 2 pointers: 1 at the start, 1 at start + n
    //when start + n is null return pointer 1
    Node* p1 = tip;
    Node* p2 = p1;
    int count = 1;
    while(count++ < nth) {
        if(p2->next == NULL) {
            printf("list too short\n");
            return;
        }
        p2 = p2->next;
    }
    while(p2->next != NULL) {
        //advance both
        p1 = p1->next;
        p2 = p2->next;
    }
    printf("%i from last node data: %i\n", nth, p1->data);
}

int main() {
    Node* n = new Node(0);
    n->push_back(0);
    n->push_back(1);
    n->push_back(2);
    n->push_back(2);
    n->push_back(3);
    n->push_back(4);
    n->push_back(1);

    nth_to_last(n, 0);
    nth_to_last(n, 4);
    nth_to_last(n, 6);
    nth_to_last(n, 10);

    return 1;
}
