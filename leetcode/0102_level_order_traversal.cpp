// question link https://leetcode.com/problems/binary-tree-level-order-traversal/
class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            queue<TreeNode*>q;
            if(root)q.push(root);
            else return {};
            vector<vector<int>>ans;
            while(!q.empty()){
                int size=q.size();
                vector<int>level;
                for( int i=0;i<size;i++){
                    auto a = q.front();
                    level.push_back(a->val);
                    q.pop();
                    if(a->left)q.push(a->left);
                    if(a->right)q.push(a->right);
                }
                ans.push_back(level);
            }
            return ans;
        }
    };