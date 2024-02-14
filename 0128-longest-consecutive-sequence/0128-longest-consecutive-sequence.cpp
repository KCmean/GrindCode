class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest =  0;
        unordered_set<int> set1(nums.begin(), nums.end());
        
        for (auto i : nums) {
            if (!set1.count(i -  1)) { 
                int length =  1; 
                while (set1.count(i + length)) { 
                    length +=  1;
                }
                longest = max(longest, length); 
            }
        }
        
        return longest;
    }
};
