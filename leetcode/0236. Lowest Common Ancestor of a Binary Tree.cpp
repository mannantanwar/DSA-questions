/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//question link https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
class Solution {
    public:
        TreeNode* solve(TreeNode* root, TreeNode* p,TreeNode* q){
            if(root == p || root==q || root ==NULL)return root;
    
            TreeNode* left = solve(root->left,p,q);
            TreeNode* right = solve(root->right,p,q);
            if(!left )return right;
            if(!right)return left;
            else{
                // mtlb lca milgya 
                return root;
            }
        }
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            return solve(root,p,q);
        }
    };