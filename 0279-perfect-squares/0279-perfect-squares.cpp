
class Solution {
public:
    int numSquares(int n) {
        
        int res = n, num =2;
        while(num * num <=n){
            int x = n/(num*num), y = n%(num*num);
            res = min(res, x + numSquares(y));
            ++num;
        }

        return res;

       
    }
};