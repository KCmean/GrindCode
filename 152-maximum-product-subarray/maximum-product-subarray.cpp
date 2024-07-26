class Solution {
public:
    int maxProduct(vector<int>& nums) {

        double m = 1;
        double y = 1;
        int a = nums.size();
        double ans = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            if(m == 0 ) m = 1;
            if(y == 0) y = 1;

            m *= nums[i];
            y *= nums[a-i-1];

            ans = max(ans,max(m,y));
        }

        return ans;
        
    }
};