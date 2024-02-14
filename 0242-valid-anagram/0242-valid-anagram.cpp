class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }
        
        unordered_map<char, int> map1;

        for(auto i : s){
            map1[i]++;
        }
        unordered_map<char, int> map2;

        for(auto k : t){
            map2[k]++;
        }

        return map1 == map2;


    }
};