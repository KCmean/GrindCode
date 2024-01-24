class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){
            bool flag = false;
            for(int j = i+1; j<nums.size()+i; j++){
                int m = j % nums.size();
                if(nums[i] < nums[m]){
                    ans.push_back(nums[m]);
                    flag = true;
                    break;
                }
                
                
            }
            if(flag == false){
                ans.push_back(-1);
            }
        }
        
        return ans;
        
    }
};