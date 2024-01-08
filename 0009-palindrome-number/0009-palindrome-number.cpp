class Solution {
public:
    bool isPalindrome(int n) {
        string s = to_string(n);

        int x = s.length();

        int i = 0;
        int j = x - 1;

        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};
