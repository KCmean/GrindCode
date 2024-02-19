class Solution {
public:
    bool isPowerOfFour(int n) {
        
        int cnt = 0;
        int length = 0;
        
        while (n > 0) {
            length++;
            
            if ((n & 1) == 1) {
                cnt++;
            }
        n = n >> 1; 
        }
        // cout<<length;
 
        if (cnt == 1 && length%2 != 0){ 
            return true;
        }
        return false;
    }
};