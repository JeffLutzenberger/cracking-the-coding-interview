class Node {
    public:
 
    Node* next = NULL;
    int data;
    
    Node(int d) {data = d;}

    void push_back(int d) {
        Node* end = new Node(d);
        Node* n = this;
        while(n->next != NULL) { n = n->next; }
        n->next = end;
    }
};

void remove_node(Node* tip, Node* n) {
    if(n == tip) {
        delete tip;
        tip = n->next;
    } else {
        Node* prev = tip;
        while(prev->next != n) {
            prev = prev->next;
            if(prev == NULL) {
                printf("node not found");
                break;
            }
        }
        prev->next = n->next;
        delete n;
    }
}

void print_list(Node* n) {
    while(n != NULL) {
        printf("%i ", n->data);
        n = n->next;
    }
    printf("\n");
}


