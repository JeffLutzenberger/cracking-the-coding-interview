#include <stdio.h>
#include <string.h>
#include "node.cpp"

void delete_data_at_node(Node* the_node) {
    // the only way to solve this is to move the data and delete the 
    // last node
    // the question is misleading here since it states delete a node
    // in the middle of a singly linked list.
    // the solution does not delete a node in the middle, it deletes
    // the last node.

    print_list(the_node);
    Node* n = the_node;
    while(n != NULL) {
        print_list(the_node);
        n->data = n->next->data;
        n = n->next;
        if(n->next->next == NULL) {
            n->next = NULL;
            break;
        }
    }
    print_list(the_node);
}

int main() {
    Node* n = new Node(0);
    n->push_back(0);
    n->push_back(1);
    n->push_back(2);
    n->push_back(3);
    n->push_back(4);
    n->push_back(5);
    n->push_back(6);

    delete_data_at_node(n->next->next->next);

    return 1;
}
