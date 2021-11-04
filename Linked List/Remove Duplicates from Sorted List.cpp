// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
         ListNode *i=head, *j=head->next;
         while(j){
            while(j){
                if(i->val==j->val){
               j=j->next;
               i->next=j;
           }else
                break;
        }
            i=i->next;
            if(j) j=j->next;
        }
        return head;
    }
};
