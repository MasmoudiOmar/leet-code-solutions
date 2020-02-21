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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         if(!l1)
    {
        return l2;
    }
     if(!l2)
    {
        return l1;
    }
    if(!l2 && !l1)
    {
        return nullptr;
    }
    ListNode* head{nullptr};
    if(l1->val < l2->val)
    {  
        head=l1;
        l1=l1->next;
    }
     else
    {
       head=l2;
       l2=l2->next;
    }
    ListNode* prev{head};
    while(l1 && l2)
    {
        if(l1->val < l2->val)
        {   
            prev->next=l1;
            l1=l1->next;
        }
        else
        {   
            prev->next=l2;
            l2=l2->next;
        }
        prev=prev->next;
    }
    if(!l1)
    {
      prev->next=l2;
    }
    else
    {
      prev->next=l1;
    }
    return head;
}
};
