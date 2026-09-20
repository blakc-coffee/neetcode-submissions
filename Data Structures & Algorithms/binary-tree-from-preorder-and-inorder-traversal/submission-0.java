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
    int ptr=0;
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        return treeBuilder(preorder,inorder ,0,inorder.length-1);
    }

    TreeNode treeBuilder(int[] preorder, int[] inorder,int l,int r){
        int val;
        TreeNode node;
        if (l>r)
        return null;
        else{
            val=preorder[ptr++];
            node=new TreeNode(val);
            int j;
        for( j=0;j<preorder.length;j++){
            if(inorder[j]==val)
            break;
        }
        node.left = treeBuilder(preorder,inorder,l,j-1);
        node.right = treeBuilder(preorder,inorder,j+1,r);

        return node;
        }
    }
}
