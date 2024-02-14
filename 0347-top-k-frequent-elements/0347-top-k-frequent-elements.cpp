class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> hmap;
        
        for(auto i :  nums){
            hmap[i]++;
        }  
        
        vector<pair<int,int>> freqPair;
        
        for(auto& i : hmap){
            freqPair.push_back({i.first,i.second});
        }
        
        sort(freqPair.begin() , freqPair.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        });
            
        vector<int> result;
        for (size_t i =  0; i < k; ++i) {
            result.push_back(freqPair[i].first);
        }

        return result;
        
        
       
    }
};