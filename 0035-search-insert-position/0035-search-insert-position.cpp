class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // sort(nums.begin(), nums.end());
        int p = 0;
        int q = nums.size();
        int m  = 0;
        // if(target == 0) return m;
        bool flag = false;
        while(p < q){
            
            m = p + (q - p)/2;
            
            if(nums[m] == target){
                return m;
                // flag = true;
            }
            
            else if(nums[m] < target){
               p = m+1; 
            }else{
                q = m;
            }
           
        }
        // if(!flag){
        //     if(target > nums[m]){
        //         return m+1;
        //     }else{
        //         return m - 1;
        //     }
        // }

        return p;
    }
};