class Solution {
public:
    int candy(vector<int>& arr) {
      int n = arr.size(),ans = 0;
      vector<int> candies(n,1);

      for(int i = 1;i<n;i++)
      {
        if(arr[i]>arr[i-1])
        candies[i] = candies[i-1]+1;
      }
      for(int i = n-1;i>0;i--)
      {
        if(arr[i-1]>arr[i] && candies[i-1]<=candies[i])
        candies[i-1]  = candies[i]+1;
      }
      for(auto x : candies) ans+=x;
      return  ans;
        
    }
};