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
    ListNode *detectCycle(ListNode *head) 
    {
        int x=0;
        bool LOOP = true;
        ListNode *aux = head;
        ListNode *aux2 = head;
        
        if(head == NULL)
        {
            return NULL;
        }
        
        while(LOOP)
        {
            aux2=aux2->next;
            aux=aux2;
            for(int i=0;i<8100;i++)
            {
                if(aux == NULL)
                {
                    return NULL;
                }
                
                if(aux == head)
                {
                    return head;
                }
                
                if(aux->next == aux2)
                {
                    return aux2;
                    
                }
                
                aux=aux->next;
            }
            
        }
        
    }
};