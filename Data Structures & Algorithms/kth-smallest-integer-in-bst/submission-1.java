/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    int[] arr = new int[1000];
    int i=0;
    public int kthSmallest(TreeNode root, int k) {
        sortBST(root);
        return arr[k-1];
    }

    public void sortBST(TreeNode root){
        if(root==null)
        return;

        sortBST(root.left);

        arr[i++]=root.val;

        sortBST(root.right);
    }
}
