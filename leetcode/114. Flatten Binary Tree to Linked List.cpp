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
// ques link https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
class Solution {
    public:
        void solve(TreeNode* root){
            if(!root->left && !root->right){
                return;
            }
            TreeNode* store= root->right;
            bool check = false;
            if(root->left){
                check = true;
                root->right = root->left;
                root->left=NULL;
            }
            if(root->right)solve(root->right);// this is basically solving the left wich has been attached to the right of the tree
            if(check && store){
                solve(store);//solving root->right
                TreeNode* curr= root;
                while(curr->right){
                    curr=curr->right;
                }
                curr->right = store;
            }
            return ;
        }
        void flatten(TreeNode* root) {
            if(root)solve(root);
        }
    };