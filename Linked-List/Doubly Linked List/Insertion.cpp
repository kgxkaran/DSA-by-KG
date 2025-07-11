1) Insertion at Beginning :-

  Node* insertAtHead(Node* head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    if(head != NULL)
        head->prev = newNode;
    head = newNode;
    return head;
}

2) Insertion at End :-

  Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node(data);
    if(head == NULL)
        return newNode;

    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

3) Insertion at any position :- 

  Node* insertAtPos(Node* head, int data, int pos) {
    Node* newNode = new Node(data);
    if(pos == 1) {
        newNode->next = head;
        if(head != NULL)
            head->prev = newNode;
        return newNode;
    }

    Node* temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL)
        return head;  // position out of bounds

    newNode->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
