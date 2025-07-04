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

int main(){
    Node*first = new Node(34);
    first->next = new Node(64);
    first->next->next = new Node(34);
    first->next->next->next = new Node(75);
}
