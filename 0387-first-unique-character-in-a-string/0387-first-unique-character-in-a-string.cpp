class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> omap;
        
        
        vector<int> count(26);
        
        for(const char i : s){
            ++count[i-'a'];
        }
        
        for(int i = 0; i < s.length(); ++i){
            if(count[s[i] - 'a'] == 1 ){
                return i;
            }
        }
        
        return -1;
        
    }
};