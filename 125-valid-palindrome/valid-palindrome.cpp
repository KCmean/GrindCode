#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int i = 0;
        int j = s.length() - 1;
        
        while (i < j) {
            while (i < j && !std::isalnum(s[i])) {
                i++;
            }
            while (i < j && !std::isalnum(s[j])) {
                j--;
            }
            if (std::tolower(s[i]) != std::tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};
