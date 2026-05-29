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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c = 0;
        ListNode* temp = head;
        while(temp){
            c+=1;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = nullptr;

        if(c==n){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        int i=0;
        while(i<c-n){
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};
