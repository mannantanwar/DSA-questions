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
// question linkk https://leetcode.com/problems/diameter-of-binary-tree/
class Solution {
    public:
        int diameter=0;
        int maxdepth(TreeNode* node){
            if(node ==NULL)return 0;
            int left = 0,right=0;
            if(node->left)left = maxdepth(node->left);
            if(node->right)right=maxdepth(node->right);
            diameter = max(diameter,left+right);
            return 1+max(left,right);
        }
        int diameterOfBinaryTree(TreeNode* root) {
            maxdepth(root);
            return diameter;
        }
    };