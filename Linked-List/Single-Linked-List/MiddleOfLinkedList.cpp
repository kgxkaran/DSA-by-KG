class Solution {
public:
    int length(ListNode*head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        int mid = len/2;

        for(int i = 0; i < mid; i++){
            head = head->next;
        } 
        return head;
    }
};
