/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    int count=0;
public:
    int goodNodes(TreeNode* root) {
        countGoodNodes(root,root->val);
        return count;
    }

    void countGoodNodes(TreeNode* root,int maxm){
        if(root==nullptr)
        return;
        
        if(root->val>=maxm)
        count++;

        countGoodNodes(root->left,max(maxm,root->val));
        countGoodNodes(root->right,max(maxm,root->val));

    }
};
