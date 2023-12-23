class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int, int> umap;
        // for(auto x : nums){
        //     umap[x]++;
        // }
        
        // map<int, int>::iterator it = umap.begin();
        
    //     int count;
    //     while (it != umap.end()) {

    //         ++it;
    // }
        // return count;

        // return umap.size();

        	int k=1;
	for(int i=1; i<nums.size(); i++)        
		if(nums[i]!=nums[i-1]) nums[k++] = nums[i];     
	return k;
        
    }
};