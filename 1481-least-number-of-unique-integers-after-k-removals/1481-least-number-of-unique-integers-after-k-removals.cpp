class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int, int> hmap;
        priority_queue<int , vector<int>, greater<>> pq;

        for(const int i : arr){
            ++hmap[i];
        }

        for(const auto [_, freq] : hmap){
            pq.push(freq);
        }

        while(k > 0){
            k -= pq.top();
            pq.pop();
        }
        return pq.size() + (k < 0 ? 1 : 0);

    }
};