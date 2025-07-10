Approach 1 :- using vector<int> O(N) space complexity



class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode*temp = head;
        vector<int>store;

        while(temp != NULL){
            store.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = store.size() - 1;

        while(i < j){
            if(store[i] != store[j]) return false;
            i++;
            j--;
        }

        return true;
}

Approch 2 :- Using fast-slow pointers


class Solution {
public:
    ListNode*reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*fast = head;
        ListNode*slow = head;
        

        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = reverse(slow);
        ListNode* firstHalf = head;

        while(secondHalf){
            if(secondHalf->val != firstHalf->val) return false;
            secondHalf = secondHalf->next;
            firstHalf = firstHalf->next;
        }
        return true;
        
        


