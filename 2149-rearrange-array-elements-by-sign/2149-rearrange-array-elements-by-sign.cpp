class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        if(nums.size() == 1 || nums.size() == 0 ){
            return nums;
        }
        
        vector<int> positive;
        vector<int> negative;
        
        vector<int> ans;
        
        for(auto i : nums){
            if( i > 0){
                positive.push_back(i);
            }else{
                negative.push_back(i);
            }
        }
        
        bool isPositive = true;
        int posIndex =  0, negIndex =  0;
        
        while (posIndex < positive.size() || negIndex < negative.size()) {
            if (isPositive && posIndex < positive.size()) {
                ans.push_back(positive[posIndex]);
                posIndex++;
            } else if (!isPositive && negIndex < negative.size()) {
                ans.push_back(negative[negIndex]);
                negIndex++;
            }
            isPositive = !isPositive;
        }
        
        return ans;
        
    }
};