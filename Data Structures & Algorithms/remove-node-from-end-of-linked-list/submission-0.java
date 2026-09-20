/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {

        int len=0,pos=1;
        ListNode curr=head;
        

        while(curr!=null){
            curr=curr.next;
            len++;
        }

        if(len==n)
        return head.next;


        curr=head;
        while(curr!=null){
            if(len-pos==n){
                ListNode temp=curr.next.next;
                curr.next=temp;
                return head;
            }

            curr=curr.next;
            pos++;
        }
        return head;
    }
}
