/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* reverseList(struct ListNode* head) {
    
    struct ListNode* prevnode=NULL;
    struct ListNode* currnode=head;
    
    while (currnode)
    {   
        struct ListNode* nxt=currnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nxt;
    }
    return prevnode;
}
void reorderList(struct ListNode* head) 
{
    struct ListNode* slow=head;
    struct ListNode* fast=head->next;
    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode* second=reverseList(slow->next);
    slow->next=NULL;
    struct ListNode* first=head;

    while (second)
    {
        struct ListNode* temp1=first->next;
        struct ListNode* temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }

    
}