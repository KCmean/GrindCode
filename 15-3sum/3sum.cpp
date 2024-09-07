class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> output;
        int n = nums.size();
        int target = 0;

        // Sort the array to enable the two-pointer technique
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target) {
                    vector<int> ans = {nums[i], nums[j], nums[k]};
                    output.push_back(ans);
                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;

                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        return output;
    }
};
