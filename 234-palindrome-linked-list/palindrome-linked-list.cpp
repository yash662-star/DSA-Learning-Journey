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
   ListNode*   reversell(ListNode* head){
    ListNode* prev=NULL;
    while(head!=NULL){
        ListNode* nex= head->next;
        head->next=prev;
        prev=head;
        
        head=nex;
    }

return prev;

        }
    bool isPalindrome(ListNode* head) {

   
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* ptr2=reversell(slow);
        fast=head;
        while(ptr2!=NULL){
            if(ptr2->val!=head->val)return false;
            ptr2=ptr2->next;
            head=head->next;

        }
        return true;
    }
};