/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::stack <int> ints ;
        ListNode* temp = head;
        while (temp != NULL) {
            ints.push(temp->val);
            temp = temp->next;
        }
        
       int stacksize = ints.size();
        if (stacksize % 2 == 0) {
            for(int c = stacksize/2; c > 0; c--) {
                if (head->val != ints.top()) 
                    return false;
                ints.pop();
                head = head->next;
            }
        } else {
            for(int c = stacksize/2 +1; c > 0; c--) {
                if (head->val != ints.top()) 
                    return false;
                ints.pop();
                head = head->next;
            }
        }
        return true;
    }
};