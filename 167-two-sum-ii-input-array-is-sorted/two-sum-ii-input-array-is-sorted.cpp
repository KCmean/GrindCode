class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            } else if (nums[i] + nums[j] > target) {
                j--;
            } else {
                i++;
            }
        }

        return ans;

    }
};