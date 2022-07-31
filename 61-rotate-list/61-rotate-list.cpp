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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(n==0)return head;
        if(k>n){
            k=k%n;
        }
        if(k==n){
            return head;
        }
        temp=head;
        ListNode*slow=head;
        while(k--){
            temp=temp->next;
        }
        while(temp->next!=NULL){
            temp=temp->next;
            slow=slow->next;
        }
        temp->next=head;
        temp=slow->next;
        slow->next=NULL;
        return temp;
    }
};