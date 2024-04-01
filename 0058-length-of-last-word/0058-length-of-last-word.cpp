class Solution {
public:
    int lengthOfLastWord(string s) {

       int n = s.length()-1;
       

       while( n >= 0 && s[n] == ' '){
           n--;
       }

       int cnt = n;

       while(cnt >= 0 && s[cnt] != ' '){
           cnt--;
       }

        return n - cnt;

    }
};