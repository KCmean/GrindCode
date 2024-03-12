class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int commonElement = -1; 
        
        set<int> s;
        
        for(int i = 0; i < nums1.size(); i++){
            s.insert(nums1[i]);
        }
        
        for(int i = 0; i < nums2.size(); i++){
            if(s.find(nums2[i]) != s.end()){
                if(commonElement == -1 || nums2[i] < commonElement){
                    commonElement = nums2[i];
                }
            }
        }
        
        return commonElement;
    }
};
