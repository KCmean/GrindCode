class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> ans(n+1);
        
        for(vector<int>& i : trust){
           --ans[i[0]];
            ++ans[i[1]];
        }
        
        for(int i =1 ; i < n+1; ++i){
            if(ans[i] == n -1){
                return i;
            }
        }
        
        return -1;
        
       
        
        
    }
};