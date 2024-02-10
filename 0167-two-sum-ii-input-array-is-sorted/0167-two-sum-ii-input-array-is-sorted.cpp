class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p = 0;
        int q = nums.size() - 1;
        vector<int> ans;
        
        while(p < q){
            if(nums[p] + nums[q] == target){
                ans.push_back(p+1);
                ans.push_back(q+1);
                
                break;
            }else{
                if(nums[p] + nums[q] > target){
                    q--;
                }else{
                    p++;
                }
            }
        }
        
        return ans;

    }
};