class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        if(strs.empty()){
            return "";
        }

        string pref = strs[0];

        for(string s : strs){
            while(s.find(pref) != 0){
                pref = pref.substr(0,pref.length() - 1);
            }
        }

        return pref;

        
    }
};