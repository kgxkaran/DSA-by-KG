1) Iterative approach :- 

  Node* reverseDLL(Node* head) {
    Node* temp = NULL;
    Node* current = head;

    // Jab tak list khatam na ho
    while(current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node (jo pehle next tha, ab prev ban gaya)
        current = current->prev;
    }

    // New head woh node hai jiska prev NULL hai
    if(temp != NULL)
        head = temp->prev;

    return head;
}

2) Recursive approach :- 

  Node* reverseDLLRecursive(Node* head) {
    if(head == NULL) return NULL;

    // Swap next and prev
    Node* temp = head->next;
    head->next = head->prev;
    head->prev = temp;

    // Agar pehle prev NULL tha — ab next NULL hoga, toh wahi new head hai
    if(head->prev == NULL)
        return head;

    // Aage badho
    return reverseDLLRecursive(head->prev);
}
