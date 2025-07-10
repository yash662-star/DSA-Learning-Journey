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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddnode = new ListNode  (-1);
        ListNode* evennode = new ListNode  (-1);
        int idx = 1;
       ListNode* odd = oddnode;
        ListNode* even=evennode;
        ListNode* ptr = head;
        
        if(head==NULL||head->next==NULL)return head;

        while (ptr != NULL) {
            if (idx% 2 != 0) {
               
                odd->next = ptr;
                ptr = ptr->next;
                odd = odd->next;
                odd->next = NULL;

            } else{
            
               even->next = ptr;
            ptr = ptr->next;
            even = even->next;
            even->next = NULL;
        } 
        idx++;
        }
        odd->next=evennode->next;
        delete(evennode);
        head=oddnode->next;
        delete(oddnode);
        return head;
    }

};