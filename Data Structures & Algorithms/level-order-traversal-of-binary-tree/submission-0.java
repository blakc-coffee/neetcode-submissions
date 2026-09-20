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
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        List<List<Integer>> list = new ArrayList<>();
        Map<TreeNode,Integer> map = new HashMap<>();

            if(root == null)
            return list;

        list.add(new ArrayList<>());
        q.offer(root);
        list.get(0).add(root.val);
        map.put(root,0);

        while(!q.isEmpty()){

            TreeNode temp = q.poll();
            int level = map.get(temp);

            if(temp.left!=null){
                    if(list.size() <= level+1)
                    list.add(new ArrayList<>());

                list.get(level+1).add(temp.left.val);
                q.offer(temp.left);
                map.put(temp.left, level+1);
            }

            if(temp.right!=null){
                if(list.size() <= level+1)
                    list.add(new ArrayList<>());

                list.get(level+1).add(temp.right.val);
                q.offer(temp.right);
                map.put(temp.right, level+1);
            }
        }

        return list;
        
    }
}
