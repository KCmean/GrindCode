class Solution {
public:
    // bool solve(vector<int> nums,vector<int>& dp,int &target){
    //     if(dp[n] == target){
    //         return true
    //     }

    //     for(int i = 0; i < nums.size(); i++){

    //     }
    // }
    bool canJump(vector<int>& nums) {
        
        // vector<int> dp(n+1);
        int target = nums.size() -1;

        for(int i = nums.size() - 2; i >= 0; i--){
            if(target <= i+ nums[i]){
                target = i;
            }
        }
        return target == 0;
        
    }
};