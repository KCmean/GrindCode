#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // Function to store the zig zag order traversal of tree in a list.
        vector<vector<int>> result; // Result is now vector of vector<int>
        
        if(root == NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        bool flag = true;
        
        while(!q.empty()){
            int size = q.size();
            
            vector<int> ans(size);
            
            for(int i = 0; i < size; i++){
                TreeNode* front = q.front();
                q.pop();
                
                int index = flag ? i : size - i - 1;
                ans[index] = front->val;
                
                if(front -> left){
                    q.push(front -> left);
                }
                if(front -> right){
                    q.push(front -> right);
                }
            }
            flag = !flag;
            
            // Push the current level's traversal result to the result vector
            result.push_back(ans);
        }
        
        return result;
        
    }
};
