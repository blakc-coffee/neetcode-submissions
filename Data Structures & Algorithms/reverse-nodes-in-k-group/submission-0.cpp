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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* start=head;
        int c=0;

        while(temp!=nullptr){
            c++;
            if(c==k){
                ListNode* y = temp->next;
                temp->next=nullptr;
                ListNode* x = reverseList(start);
                c=0;
                start->next=reverseKGroup(y,k);
                return x;
            }
            temp=temp->next;
        }
        return start;

        
    }


    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=nullptr;

        while(curr!=nullptr){
            ListNode* temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;

    }
};
