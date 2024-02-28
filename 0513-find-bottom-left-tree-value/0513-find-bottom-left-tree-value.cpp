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
    int findBottomLeftValue(TreeNode* root) {
        std::queue<TreeNode*> queue{{root}};
      
        int bottomLeftValue = 0;
      
        while (!queue.empty()) {
            bottomLeftValue = queue.front()->val;
          
            for (int i = static_cast<int>(queue.size()); i > 0; --i) {
                TreeNode* currentNode = queue.front();
                queue.pop();
              
                if (currentNode->left) queue.push(currentNode->left);
                if (currentNode->right) queue.push(currentNode->right);
            }
        }
      
        return bottomLeftValue;
    }
};