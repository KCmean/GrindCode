class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        
        int ans  = 0;
        
        vector<int> l(n);
        vector<int> r(n);
        
        for(int i = 0; i < n; i++){
            l[i] = i == 0 ? height[i] : max(height[i] , l[i-1]);
        }
        
        for(int i = n-1; i >= 0; i--){
            r[i] = i == n-1 ? height[i] : max(height[i] , r[i+1]);
        }
        
        for(int i =0; i < n; i++){
            ans += min(l[i],r[i]) - height[i];
        }
        
        return ans;
        
        
    }
};