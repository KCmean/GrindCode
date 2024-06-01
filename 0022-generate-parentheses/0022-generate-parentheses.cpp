class Solution {

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        dfs(ans,"",0,0,n);
        return ans;
        
    }
private:
    void dfs(vector<string>& ans,string curr,int open,int close,int max){
        if(curr.length() == max * 2){
            ans.push_back(curr);
            return ;
        }
        
        if(open < max){
            dfs(ans,curr + "(",open +1,close,max);
        }
        if(close < open){
            dfs(ans,curr + ")",open,close+1,max);
        }
    }
};