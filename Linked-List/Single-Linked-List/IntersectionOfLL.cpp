Approach 1:- Brute Force , compairing both the nodes and if equal returning the head;
            Time complexity :- O(M*N)

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA != NULL){
            ListNode*temp = headB;
            while(temp != NULL){
                if(headA == temp) return headA;
                temp = temp->next;
            }
            headA = headA->next;
        }
        return NULL;
    }
};


Approach 2 :- Better Solution ,  using HashSET  O(M +  N) :- Time complexity 

  class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>st;

        while(headA != NULL){
            st.insert(headA);                st.insert() to insert elements in set
            headA = headA->next;
        }
        
        while(headB != NULL){
            if(st.count(headB)) return headB;    st.count() checks ki element set mai hii kii nahii return 1 if exists otherwise 0
            headB = headB->next;
        }
        return NULL;
    }

Approach 3 :- Best Solution , using 2 pointers   

  class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a = headA;
        ListNode*b = headB;

        while(a != b){
            if(a == NULL) a = headB;
            else{
                a = a->next;
            }
            if(b == NULL) b = headA;
            else{
                b = b->next;
            }
        }

        return a;
        
    }
};


