class Solution {
 public:
  int rob(vector<int>& nums) {
    int prev1 = 0;  
    int prev2 = 0;

    //[prev2, prev1 , n , n++, ...]  

    for (const int n : nums) {
      const int dp = max(prev1, prev2 + n);
      prev2 = prev1;
      prev1 = dp;
    }

    return prev1;
  }
};