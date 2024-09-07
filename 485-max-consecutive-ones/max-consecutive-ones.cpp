class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {


     int max1 = -1;
     int flag = 0;

     for(auto i : nums){
        if(i == 1){
            flag++;
        }else{
            max1 = max(max1,flag);
            flag=0;
        }
     }

     max1 = max(max1,flag);
     return max1;

    }
};