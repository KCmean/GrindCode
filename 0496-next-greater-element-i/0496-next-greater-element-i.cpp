class Solution {
private:
    void solve(int j, int i, const std::vector<int>& nums2, std::vector<int>& ans) {
        bool found = false;

        for (int k = j + 1; k < nums2.size(); k++) {
            if (nums2[k] > i) {
                ans.push_back(nums2[k]);
                found = true;
                break;
            }
        }

        if (!found) {
            ans.push_back(-1);
        }
    }

public:
    std::vector<int> nextGreaterElement(const std::vector<int>& nums1, const std::vector<int>& nums2) {
        std::vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            bool found = false;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    solve(j, nums1[i], nums2, ans);
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};
