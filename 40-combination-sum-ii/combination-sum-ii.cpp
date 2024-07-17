#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    void s(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); ++i) {
            if (i > ind && arr[i] == arr[i - 1]) continue; // Skip duplicates
            if (arr[i] > target) break; // Early stopping
            ds.push_back(arr[i]);
            s(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        s(0, target, candidates, ans, ds);
        return ans;
    }
};
