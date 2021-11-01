// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
        ListNode* node=head;
        int cnt=1;
        while(node->next!=NULL){
            node=node->next;
            ++cnt;
        }
      
        cnt=cnt-n;
        if(cnt==0){
            if(cnt==1){
                return NULL;
            }
            else{
               head=head->next;
                return head;
            }
        }
        node=head;
        int temp=1;
        ListNode* prev=NULL;
        while(node){
          if(temp==cnt){
                prev=node;
            }
            if(temp==cnt+1){        
                if(node) prev->next=node->next;
                else prev->next=NULL;
            }
            ++temp;
            node=node->next;
        }
        return head;
    }
};
