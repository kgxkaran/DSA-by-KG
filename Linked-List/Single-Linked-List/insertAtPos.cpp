
void insertAtPos(Node*&head , int pos , int x){
    Node*newNode = new Node(x);
    
    if(pos == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    
    Node*curr = head;
    for(int i = 1; i < pos - 1; i++){
        if(curr == NULL){
            return;
        }
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}
