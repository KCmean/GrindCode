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
    private:
    int height(TreeNode* node) {

        if (!node) {
            return 0;
        }

        int lh = height(node->left);
        int rh = height(node->right);

        return 1 + max(lh, rh);
    }

public:
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL){
            return true;
        }
        
        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        
        bool third = abs(height(root -> left) - height(root -> right) ) <=1;
        
        if(left && right && third){
            return true;
        }
        else {
            return false;
        }

    }
};