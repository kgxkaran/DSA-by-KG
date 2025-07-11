1) Printing from Front :- 

  void printForward(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


2) Print from Backwards :- 

  void printBackward(Node* head) {
    if(head == NULL) return;

    // Pahle tail tak jao
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // Ab tail se head ki taraf prev se print karo
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

