class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> ang;
        
        for(const string str : strs){
            string key = str;
            ranges::sort(key);  
            ang[key].push_back(str);     
        }
        
        for(const auto& [y , x] : ang){
            ans.push_back(x);
        }
        
        return ans;
        
    }
};