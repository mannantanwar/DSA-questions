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
// question link https://leetcode.com/problems/balanced-binary-tree/
class Solution {
    public:
        int solve(TreeNode* root){
            if(!root)return 0;
            int left =0,right =0;
            left =solve(root->left);
            if(left==-1)return -1;
            right=solve(root->right);
            if(right ==-1)return -1;
            if(abs(left-right)>1)return -1;
            return 1+max(left,right);
        }
        bool isBalanced(TreeNode* root) {
            if(solve(root)==-1){
                return false;
            }
            return true;
        }
    };