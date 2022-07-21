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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tem=new ListNode();
        ListNode* a=tem;
        int carry=0,x=0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL){
                x+=l1->val;
            }
            if(l2!=NULL){
                x+=l2->val;
            }
            x+=carry;
            carry=x/10;
            tem->val=x%10;
            x=0;
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
            if(l1==NULL && l2==NULL){
                if(carry!=0){
                    tem->next=new ListNode();
                    tem=tem->next;
                    tem->val=carry;
                }
                break;
            }
            tem->next = new ListNode();
            tem=tem->next;
        }
        return a;
    }
};