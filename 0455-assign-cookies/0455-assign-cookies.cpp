// class Solution {
// public:
//     int findContentChildren(vector<int>& v, vector<int>& s) {
       
//         sort(v.begin(), v.end());
//         sort(s.begin(), s.end()); 
        
//         int max = 0;
//         for(int j = 0; j < v.size() && j < s.size(); ++j){
//             if(v[max] <= s[j]){
//                 ++max;
//             }
//         }
        
        
//         return max;
        
        
//     }
// };



class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    ranges::sort(g);
    ranges::sort(s);

    int i = 0;
    for (int j = 0; j < s.size() && i < g.size(); ++j)
      if (g[i] <= s[j])
        ++i;

    return i;
  }
};