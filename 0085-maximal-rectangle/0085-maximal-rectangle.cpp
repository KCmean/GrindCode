class Solution {
private: 

    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = INT_MIN;

        for (int i = 0; i < n; i++) {
            int l = heights[i];

            if (next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int newArea = l * b;
            area = max(newArea, area);
        }

        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        int n = matrix.size();
        if (n == 0) return 0;
        int m = matrix[0].size();

        vector<vector<int>> heights(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                heights[i][j] = matrix[i][j] - '0';
            }
        }

        int area = largestRectangleArea(heights[0]);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (heights[i][j] != 0) {
                    heights[i][j] += heights[i - 1][j];
                }
            }

            area = max(area, largestRectangleArea(heights[i]));
        }

        return area;
    }
};
