class Solution {
public:
    int maxDepth(string s) {
        stack<char> st; 
        int cnt = 0;
        int max = 0;
        for(int i  = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                cnt++;
                if(cnt > max){
                    max = cnt;
                }
            }

            else if(s[i] == ')'){
                if(st.top()== '(' && !st.empty()){
                st.pop();
                cnt--;
                }else{
                    return -1;
                }  
            }
        }

        if(!st.empty()){
            return -1;
        }

        return max;
            
    }
};