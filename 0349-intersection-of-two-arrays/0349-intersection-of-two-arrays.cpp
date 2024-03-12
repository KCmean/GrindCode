class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        
        vector<int> ans;
        
        for(int i = 0; i < nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        
        for(int i = 0; i < nums2.size(); i++){
            s2.insert(nums2[i]);
        }
        
        set<int>* shorterSet;
        set<int>* longerSet;
        
        
        if (s1.size() < s2.size()) {
            shorterSet = &s1;
            longerSet = &s2;
        } else {
            shorterSet = &s2;
            longerSet = &s1;
        }
        
        
        for (int num : *shorterSet) {
            if (longerSet->count(num) > 0) {
                ans.push_back(num);
            }
        }
        
        return ans;
    }
};
