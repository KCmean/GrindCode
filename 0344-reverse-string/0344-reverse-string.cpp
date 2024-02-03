class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        
        for(auto i : s){
            st.push(i);
        }
        
        string ams;
        
        for(int i = 0; i < s.size(); i++){
            char ch = st.top();
            s[i] = ch;
            st.pop();
            
        }
        
    }
};