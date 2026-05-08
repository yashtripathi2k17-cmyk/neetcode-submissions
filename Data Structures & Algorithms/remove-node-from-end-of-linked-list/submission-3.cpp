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
        // if(head==NULL)return NULL;
        if(head==NULL||head->next==NULL)return NULL;
        int cnt=0;
        ListNode*temp=head;
        while(temp!=NULL){
              cnt++;
              temp=temp->next;
        }
        ListNode*cur=head;
        for(int i=1;i<cnt-n;i++){
            cur=cur->next;
        }
           if(n == cnt){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        ListNode*m=cur->next;
        cur->next=m->next;
        delete m;
        return head;
        
    }
};
