class Solution {
private: 
    int gcd(int a , int b){
        if(a == 0){
            return b;
        }
        if(b==0){
            return a;
        }

        while(a != b){
            if(a > b){
                a = a-b;
            }else{
                b = b-a;
            }
        }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        int ans = gcd(min,max);

        return ans;
        
    }
};