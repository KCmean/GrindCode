class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();

        // unorderd_map<int,int> freq;
        int cnt = 0;

        // for(auto i : nums){
        //     if(i == val){
        //         cnt++;
        //     }
        // }

        for(int i = 0; i < n; i++){
            if(nums[i] == val){
                nums[i] = -1;
                cnt++;
            }
        }

        sort(nums.begin(),nums.end(),greater<int>());

        return n - cnt;
    }
};