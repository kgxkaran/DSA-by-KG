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


