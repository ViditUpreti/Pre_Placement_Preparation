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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL){
            return {};
        }
        vector<vector<int>>ans;
        vector<int>line;
        q.push(root);
        int c=1;
        int n=0;
        while(q.empty()==false){
            TreeNode* node=q.front();
            line.push_back(node->val);
            q.pop();
            c--;
            if(node->left!=NULL){
                q.push(node->left);
                n++;
            }
            if(node->right!=NULL){
                q.push(node->right);
                n++;
            }
            if(c==0){
                ans.push_back(line);
                line.clear();
                c=n;
                n=0;
            }
        }
        return ans;
    }
};