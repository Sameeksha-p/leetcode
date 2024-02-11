/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode List_t;

struct ListNode *partition(struct ListNode *head, int x)
{
    List_t small, great;
    List_t *shead = &small;
    List_t *ghead = &great;
    List_t *iter = head;

    while (iter) {
        List_t *tmp = iter;
        iter = iter->next;
        if (tmp->val < x) {
            shead->next = tmp;
            shead = shead->next;
        }
        else {
            ghead->next = tmp;
            ghead = ghead->next;
        }
    }
    ghead->next = NULL;
    shead->next = great.next;
    return small.next;
}
