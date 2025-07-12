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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptra=headA;
        ListNode *ptrb= headB;
        int counta=0;
        int countb=0;
        int dif=0;

        while(ptra!=NULL){
            counta++;
            ptra=ptra->next;
        }
        while(ptrb!=NULL){
            countb++;
             ptrb=ptrb->next;

        }
          ptra=headA;
        ptrb=headB;
        
        
        if(counta>countb){
            dif=counta-countb;
            
        while(dif>0){
            ptra=ptra->next;
         
            dif--;

        }
        }else
        dif=countb-counta;
         while(dif>0){
            ptrb=ptrb->next;
            dif--;
        

      

        
           
        }
        
        while(ptra!=NULL&&ptrb!=NULL)
        {if(ptra==ptrb)return ptrb;
            ptra=ptra->next;
            ptrb=ptrb->next;

        }
        
        
return NULL;
        
    }
};