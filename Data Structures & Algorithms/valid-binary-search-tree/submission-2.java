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
    boolean res = true;
    public boolean isValidBST(TreeNode root) {
        checkIsValidBST(root,-9999,9999);
       return res;
    }

    void checkIsValidBST(TreeNode root,long min ,long max){
        if(root==null)
        return;
        
        if(root.val>=max || root.val<=min){
            res=false;
            return;
        } 
        checkIsValidBST(root.left,min,root.val);
        checkIsValidBST(root.right,root.val,max);
    }
}
