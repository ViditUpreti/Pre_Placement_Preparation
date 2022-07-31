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
    ListNode* reve(ListNode*head){
        if(head==NULL){
            return head;
        }
        ListNode* temp=head->next;
        head->next=NULL;
        ListNode* t =head;
        while(temp!=NULL){
            ListNode* x=temp->next;
            temp->next=t;
            t=temp;
            temp=x;
        }
        head=t; 
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow;
        temp=reve(temp);
        while(temp!=NULL){
            if(head->val!=temp->val){
                return false;
            }
            head=head->next;
            temp=temp->next;
        }
        return true;
    }
};