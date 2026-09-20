/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if(head==null)
        return head;

        HashMap<Node,Node> map = new HashMap<>();
        Node dummy= new Node(-1);
        Node temp=head,newh=dummy;

        while(temp!=null){
            Node n = new Node(temp.val);
            n.val=temp.val;
            map.put(temp,n);

            dummy.next=n;
            temp=temp.next;
            dummy=dummy.next;

        }

        temp=head;
        Node t=newh.next;

        while(temp!=null){
            t.random=map.get(temp.random);
            t=t.next;
            temp=temp.next;
        }
        return newh.next;
    }

}