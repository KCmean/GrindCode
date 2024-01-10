class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = nums.size();
        vector<int> ans;
        
        for(int i = 0; i < x;i++){
            int target1 = target - nums[i];
            for(int j = i+1; j < x; j++){
                if(nums[j] == target1){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if(ans.size() > 0){
                break;
            }
        }
        return ans;
        
    }
};