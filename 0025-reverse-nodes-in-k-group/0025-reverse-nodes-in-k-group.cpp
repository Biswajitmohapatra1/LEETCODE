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
        //we need to find length because maybe k can be greater than length
int getlength(ListNode* head)
{
    ListNode* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
return len;
}
ListNode* reverseKGroup(ListNode* head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL)
    {
        return head;
    }
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* nextnode=curr->next;
    int pos=0;
    int len=getlength(head);
    if(len<k)
    {
        return head;
    }
    //one case i am going to solve rest will be dealt by recursion
    while(pos<k)
    {
       nextnode=curr->next;
       curr->next=prev;
       prev=curr;
       curr=nextnode;
       pos++;
    }
    ListNode* recursionans=NULL;
    if(nextnode!=NULL)
    {
        recursionans=reverseKGroup(nextnode,k);
        head->next=recursionans;
        //in place of head can nextnode and curr be used
    }
    return prev;
}
    
};