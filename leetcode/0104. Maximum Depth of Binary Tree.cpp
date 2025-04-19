// question link  https://leetcode.com/problems/maximum-depth-of-binary-tree/
class Solution {
    public:
        int solve( TreeNode * root ){
            if( root==NULL)return 0;
            int left = 0,right =0;
            if(root->left)left = 1+ solve(root->left);
            if(root->right)right = 1+ solve(root->right);
            return max(left,right);
        }
        int maxDepth(TreeNode* root) {
            if(!root)return 0;
            return 1+solve(root);
        }
    };