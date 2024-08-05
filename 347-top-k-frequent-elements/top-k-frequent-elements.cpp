class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mheap;

        for (auto &i : nums) {
            umap[i]++;
        }

        for (auto &i : umap) {
            int n = i.first;
            int m = i.second;
            mheap.push({m, n});
            if (mheap.size() > k) {
                mheap.pop();
            }
        }

        while (!mheap.empty()) {
            ans.push_back(mheap.top().second);
            mheap.pop();
        }

        return ans;
    }
};
