class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.length()-1;
        
        while((left < right) && (s[left] == s[right])) {
            int temp = s[left];
            
            while((left <= right) && (s[left] == temp)){
                left += 1;
            }
            while((left <= right) && (s[right] == temp)){
                right -= 1;
            }
        }
        
        return right - left + 1;
        
    }
};