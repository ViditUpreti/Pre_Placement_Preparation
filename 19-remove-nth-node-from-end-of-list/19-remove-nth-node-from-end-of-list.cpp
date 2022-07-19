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
        ListNode* ahead=head;
        ListNode* behind=head;
        for(int i =0;i<n;i++){
            ahead=ahead->next;
        }
        if(ahead==NULL){
            
            return head->next;
        }
        while(ahead->next!=NULL){
            ahead=ahead->next;
            behind=behind->next;
        }
        behind->next=behind->next->next;
        return head;
    }
};