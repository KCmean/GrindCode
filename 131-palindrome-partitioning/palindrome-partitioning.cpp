class Solution {
private:
    bool isPal(const string& s) {
        string p = s;
        reverse(p.begin(), p.end());
        return s == p;
    }

    void rec(int ind, int n, vector<vector<string>>& output, vector<string>& ans, string& s) {
        if (ind == n) {
            output.push_back(ans);
            return;
        }

        for (int i = ind; i < n; ++i) {
            string subStr = s.substr(ind, i - ind + 1);
            if (isPal(subStr)) {
                ans.push_back(subStr);
                rec(i + 1, n, output, ans, s);
                ans.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> output;
        vector<string> ans;
        int n = s.length();
        rec(0, n, output, ans, s);
        return output;
    }
};
