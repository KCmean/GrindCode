class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int seq = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int i : nums) {

            if (!s.count(i - 1)) {
                int cur = i + 1;

                while (s.count(cur)) {
                    cur++;
                }
                seq = max(seq, cur - i);
            }
        }

        return seq;
    }
};