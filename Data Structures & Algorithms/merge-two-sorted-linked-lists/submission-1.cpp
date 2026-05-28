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
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* result = new ListNode(-1);
        ListNode* temp = result;
        ListNode* l = list1;
        ListNode* r = list2;
        while(l != NULL && r != NULL){
            if(l->val < r->val){
                temp->next = l;
                temp = l;
                l = l->next;
            }
            else{
                temp->next = r;
                temp = r;
                r = r->next;
            }
        }
        if(l) temp->next = l;
        else temp->next = r;

        return result->next;
    }
};
