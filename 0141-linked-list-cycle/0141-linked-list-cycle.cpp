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
    bool hasCycle(ListNode *head) {
        //move fast 2steps and slow 1step if they meet before null then cycle is present
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL)
        {
          fast=fast->next;
            if(fast!=NULL)
            {
             fast=fast->next;
             slow=slow->next;
            }
             if(fast==slow)
        {
           return true;
        }
        }
       
        return false;
    }
};