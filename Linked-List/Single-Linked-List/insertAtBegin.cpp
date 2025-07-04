void insertAtBegin(Node* &head , int x){
    Node*newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}









#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int x){
        data = x;
        next = NULL;
    };
};
void PrintList(Node*head){
    while(head != NULL){
        cout << head->data << endl;
        cout << head->next << endl;
        head = head->next;
    }
}
void insertAtBegin(Node* &head , int x){
    Node*newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

int main(){
    Node*first = new Node(34);
    Node*second = new Node(64);
    Node*third = new Node(53);
    first->next = second;
    second->next = third;
    cout << "Older List  : " << endl;
    PrintList(first);
    insertAtBegin(first , 400);
    cout << "Updated List : " << endl;
    PrintList(first);
    
    
    
}
