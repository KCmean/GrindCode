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
    void lsw(TreeNode* root, vector<int> &ans,int level){


        if(!root) return;

        if(level == ans.size()){
            ans.push_back(root->val);
        }

        lsw(root -> right,ans,level+1);
        lsw(root -> left,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        lsw(root,ans,0);


        return ans;

    }
};