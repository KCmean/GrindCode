class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k = 0;
        
        for(int i = 0; k < nums.size() && k <= i; ++k){
            i = max(i , k + nums[k] );
        }
        
        return k == nums.size();
    }
};