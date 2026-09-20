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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode c1=l1,c2=l2,c3;
        int carry=0;
        ListNode dummy = new ListNode(-1);
        c3=dummy;

        while(c1!=null || c2!=null || carry!=0){

                int v1 = (c1 != null) ? c1.val : 0;
                int v2 = (c2 != null) ? c2.val : 0;

                int sum = v1 + v2 + carry;   

            carry = sum/10;
            sum%=10;

            c3.next  = new ListNode(sum);

             if(c1 != null)
                c1 = c1.next;

            if(c2 != null)
                c2 = c2.next;

                
            c3=c3.next;
        }
        
        return dummy.next;
    }
}
