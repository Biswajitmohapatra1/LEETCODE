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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       //leetcode 83
if(head==NULL)
{
    return head;
}
if(head->next==NULL)
{
    return head;
}
ListNode* temp=head;
// i will find duplicate one time and after that recursion will 
//handle the rest
while(temp!=NULL)
{
   if(temp->next!=NULL && temp->val==temp->next->val)
   {
         //remove
         ListNode* nextnode=temp->next;
         temp->next=nextnode->next;
         nextnode->next=NULL;
         delete nextnode;
   }
   else 
   {
    temp=temp->next;
   }
}
return head; 
    }
};