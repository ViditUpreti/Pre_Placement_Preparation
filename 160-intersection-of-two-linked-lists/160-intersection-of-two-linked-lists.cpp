/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        int m=0;
        while(temp!=NULL){
            m++;
            temp=temp->next;
        }
        temp=headB;
        int n =0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(m>n){
            int k =m-n;
            while(k--){
                headA=headA->next;
            }
        }
        else{
            int k =n-m;
            while(k--){
                headB=headB->next;
            }
        }
        while(headA!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};