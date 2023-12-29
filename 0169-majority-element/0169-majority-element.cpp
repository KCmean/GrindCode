class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto x : nums){
            mp[x]++;
        }
        
        int val = 0;
        int count = 0;
        
        for(auto& pair : mp){
            if(pair.second > count){
                count = pair.second;
                val = pair.first;
            }
        }
        
        return val;
    }
};