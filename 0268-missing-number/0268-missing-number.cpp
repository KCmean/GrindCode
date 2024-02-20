class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = ( n *(n+ 1) ) /2 ;
        
        // cout<<s;
        
        int total = 0;
        
        for(int i = 0 ; i < n; i++){
            total += nums[i];
        }
        
        return s - total;
    }
};