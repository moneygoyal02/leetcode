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
    
    ListNode* reverseSolve(ListNode* head) {
        
        if(!head || !head->next)
            return head;
        
        ListNode* last   = reverseSolve(head->next);
        head->next->next = head;
        head->next       = NULL;
            
        return last;
        
    }
    
    ListNode* reverseList(ListNode* head) {
        return reverseSolve(head);
    }
};