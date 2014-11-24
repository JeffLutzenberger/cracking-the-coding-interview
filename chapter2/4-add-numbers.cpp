#include <stdio.h>
#include <string.h>
#include "node.cpp"

void add_lists(Node* l1, Node*l2){
    Node* l3 = new Node(0);
    Node* ans = l3;
    while(l1 != NULL || l2 != NULL){
        int d1 = l1->data ? l1->data : 0;
        int d2 = l2->data ? l2->data : 0;
        int sum = d1 + d2;
        int remainder = 0;
        if(sum > 9) {
            remainder = sum - 9;
            sum = sum % 10;
        }
        printf("sum %i   remainder %i\n", sum, remainder);
        l3->data += sum;
        l3->push_back(remainder);
        l3 = l3->next;
        l1 = l1->next;
        l2 = l2->next;
    }
    print_list(ans);
}

int main() {
    Node* l1 = new Node(3);
    l1->push_back(1);
    l1->push_back(5);

    Node* l2 = new Node(5);
    l2->push_back(9);
    l2->push_back(2);

    add_lists(l1, l2);
        return 1;
}
