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
    Node*second = new Node(64);
    Node*third = new Node(53);
    first->next = second;
    second->next = third;
    
}
