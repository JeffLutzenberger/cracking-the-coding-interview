#include <stdio.h>
#include <string.h>
#include "node.cpp"

void remove_dups(Node* tip) {
    Node* n = tip;
    Node* dups = NULL;
    Node* prev = NULL;
    print_list(n);

    while(n != NULL) {
        Node* next = n->next;
        Node* prev = n;
        while(next != NULL) {
            if(n->data == next->data) {
                //found a dup
                prev->next = next->next;
                next = prev->next;
            } else {
                prev = next;
                next = next->next;
            }
        } 
        n = n->next;
    }

    print_list(dups);

    n = dups;
    while(n != NULL) {
        Node* next = n->next;
        remove_node(tip, n);
    }
    print_list(tip);

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

    remove_dups(n);

    return 1;
}
