class Solution {
public:
    int solve(vector<int>& nums, int current, vector<int>& bp) {
        if (current >= nums.size())
            return 0;
        if (bp[current] != -1)
            return bp[current];
        return bp[current] = nums[current] + max(solve(nums, current + 2, bp),
                                                 solve(nums, current + 3, bp));
    }

    int rob(vector<int>& nums) {
        vector<int> bp(nums.size() + 1, -1);
        return max(solve(nums, 0, bp), solve(nums, 1, bp));
    }
};