class Solution {
private:
    void subset(int index,vector<int> &ans, vector<vector<int>> &output,vector<int> nums){
        if(index == nums.size()){
            output.push_back(ans);
            return;
        }

        ans.push_back(nums[index]);
        subset(index + 1, ans,output, nums);
        ans.pop_back();
        subset(index + 1, ans, output, nums);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        

        // int n = nums.size();
        vector<int> ans;
        vector<vector<int>> output;
        // int index = 0;

        subset(0,ans,output,nums);

        return output;
    }
};