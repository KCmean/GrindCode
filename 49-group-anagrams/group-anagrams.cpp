class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // sort(strs.begin(),strs.end());
        unordered_map<string, vector<string>> umap;

        for(auto i : strs){
            string s = i;
            sort(s.begin(),s.end());
            umap[s].push_back(i);
        }

        vector<vector<string>> ans;

        for(auto i : umap){
            ans.push_back(i.second);
        }
        
        return ans;

    }
};