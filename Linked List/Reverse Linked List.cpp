// https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *current=head, *nxt=head->next, *prev=NULL;
    
        if(nxt==NULL){
            nxt->next=current;
            current=NULL;
            return nxt;
        }
        while(current!=NULL){
            current->next=prev;
            prev=current;
            current=nxt;
            if(current==NULL) break;
            nxt=nxt->next;
        }
        head=prev;
        return head;
   }
};
