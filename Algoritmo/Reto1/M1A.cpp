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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode*aux = head;
        if (head == NULL)
        {
            return NULL;
        }
            while(aux->next != NULL)
            {
                if(aux->val == aux->next->val)
                {
                    aux->next = aux->next->next;
                }
                else
                {
                aux = aux->next;
                }
            }
        return head;
    }
};