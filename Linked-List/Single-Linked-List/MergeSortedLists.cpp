https://leetcode.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

1) Brute Force :- storing elements in vector and sorting it 

while(list1){
            vals.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2){
            vals.push_back(list2->val);
            list2 = list2->next;
        }

        sort(vals.begin() , vals.end());

        ListNode*dummy = new ListNode(0);
        ListNode*curr = dummy;

        for(int i : vals){
            curr->next = new ListNode(i);
            curr = curr->next;
        }

        return dummy->next;  



Lets talk about making of dummy nodes :-

1) Stack-memory based:-
   ListNode dummy(0);
   ListNode*tail = &dummy   //pointer holding the address of dummy node made on stack 
   Jaise hi function khatam hoga, ye dummy destroy ho jayega
   
2) heap-memory based :-
   ListNode* dummy = new ListNode(0);
   ListNode* tail = dummy;
   
   Ye tab useful hota hai jab tumhe uska lifetime function ke baad bhi maintain karna ho ya control chahiye ho.
   otherwise you have to manually delete it


2) Recursive Method :-

  
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next , list2);
            return list1;
        }else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

3) Iteration Method :- 

  class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);   //stack-based
        ListNode*tail = &dummy;

        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if(list1) tail->next = list1;
        else tail->next = list2;

        return dummy.next;
    }
};

  
