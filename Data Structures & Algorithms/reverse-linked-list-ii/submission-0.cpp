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
    ListNode*reverse(ListNode*head){
        ListNode*prev=NULL;
        ListNode*temp=head;
        while(temp!=NULL){
            ListNode*nexti=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nexti;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*dummy=new ListNode(0);
        dummy->next = head;
        ListNode*prev=dummy;
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode*lefti=prev->next;
        ListNode*righti=lefti;
        for(int i=1;i<=right-left;i++){
            righti=righti->next;
        }
        ListNode*tail=righti->next;
        righti->next=NULL;
        ListNode*newHead=reverse(lefti);
        prev->next=newHead;
        lefti->next=tail;
        return dummy->next;


    }
};