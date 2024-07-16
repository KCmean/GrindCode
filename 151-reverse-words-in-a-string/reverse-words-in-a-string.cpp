class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = s.length() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;

        string temp = "";
        while (start <= end) {
            if (s[start] != ' ') {
                temp += s[start];
            } else if (temp.back() != ' ') {
                temp += ' ';
            }
            start++;
        }
        s = temp;

        reverse(s.begin(), s.end());
        start = 0, end = 0;int n = s.length();

        while (start < n) {
            while (end < n && s[end] != ' ') {
                end++;
            }
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
            end = start;
        }

        return s;
    }
};
