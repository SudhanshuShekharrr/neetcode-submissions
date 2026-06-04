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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* t = dummy;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 && temp2){
            if(temp2->val>=temp1->val){
                t->next = temp1;
               
                temp1 = temp1->next;
            } 
            else {
                t->next = temp2;
                
                temp2 = temp2->next;
            }
            t = t->next ;
        }

        if(temp1){
            t->next = temp1;
        }
        else {
            t->next = temp2;
        }
        return dummy->next ;
        
    }
};
