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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // a new node is created which is pointing to -1
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        int carry=0;
        //everyone have to be zero for loop to stop
        while(l1||l2||carry)
        {
            //l1 or l2 value will come to a or b respectively
            int a=l1?l1->val:0;
            int b=l2?l2->val:0;
            int sum=a+b+carry;
            int digit=sum%10;
            carry=sum/10;
            temp->next=new ListNode(digit);
            temp=temp->next;
            //if one linked list ran out of values then point it to null
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        ListNode* finalans=ans->next;
        //solving of memory leakage issue
        delete ans;
        return finalans;
    }
};