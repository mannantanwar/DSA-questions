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
// question link https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            queue<TreeNode*>q;
            vector<vector<int>>ans;
            if(root)q.push(root);
            bool check = false;
            while(!q.empty()){
                int size= q.size();
                vector<int>a(size);
                for( int i=0;i<size;i++){
                    auto top=q.front();
                    q.pop();
                    if(check)a[size-i-1]=top->val;
                    else a[i]=top->val;
                    if(top->left)q.push(top->left);
                    if(top->right)q.push(top->right);
                }
                check=!check;
                ans.push_back(a);
            }
            return ans;
        }
    };