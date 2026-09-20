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
public:
    int rob(TreeNode* root) {
        auto [rob,skip]=rob_house(root);
        return max(rob,skip);        
    }

    pair<int,int> rob_house(TreeNode* node){
         if(node==nullptr){
         return {0,0};   
        }
        int rob,skip;
        auto [left_rob,left_skip]=rob_house(node->left);
        auto [right_rob,right_skip]=rob_house(node->right);
        rob=node->val + left_skip +right_skip;
        skip=max(left_skip,left_rob) + max(right_skip,right_rob);
        return {rob,skip};

    }
};