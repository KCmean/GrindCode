class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> hmap;
        int maxi = 0;
        int freqMax = 0;
        
        for(int i : nums){
            hmap[i]++;
        }
        
        for(auto& i : hmap){
            maxi = max(maxi , i.second);
        }
        
        
        for(auto&k : hmap){
            if(k.second ==  maxi){
                freqMax += k.second;
            }
        }
        
        
        return freqMax;
        
    }
};