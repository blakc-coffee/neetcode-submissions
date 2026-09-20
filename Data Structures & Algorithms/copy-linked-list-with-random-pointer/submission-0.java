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
        Map<Node,Node> map = new HashMap<>();
        Node newh = new Node(-1);
        Node dummy=newh;
        Node curr = head;

        while(curr!=null){
            Node t = new Node(curr.val);
            dummy.next=t;
            map.put(curr,t);
            curr=curr.next;
            dummy=dummy.next;
        }
        for(Node key :map.keySet()){
            if(key.random == null)
            map.get(key).random = null;
            else
            map.get(key).random=map.get(key.random);
        }
        return newh.next;
    }
}
