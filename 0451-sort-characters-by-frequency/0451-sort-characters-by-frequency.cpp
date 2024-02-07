// class Solution {
// public:
//     string frequencySort(string s) {
//         string ans;
//         map<char, int> freq;

//         for(const char x : s ){
//             freq[x]++;
//         }

//         // vector<pair<char, int>> freqVector(freq.begin(), freq.end());


//         // sort(freqVector.beigin() , freqVector.end())
//         map<int, char, greater<int>> sortedFreq;
//         for (const auto& pair : freq) {
//             sortedFreq[pair.second] = pair.first;
//         }

//         for (const auto& pair : sortedFreq) {
//             ans += string(pair.first, pair.second);
//         }

//         return ans;

        
        
//     }
// };

class Solution {
public:
    string frequencySort(string s) {
        string ans;
        map<char, int> freq;

        for (const char x : s) {
            freq[x]++;
        }

        vector<char> charVector(s.begin(), s.end());

        sort(charVector.begin(), charVector.end(),
                  [&freq](char a, char b) {
                      return freq[a] > freq[b] || (freq[a] == freq[b] && a < b);
                  });

        ans = string(charVector.begin(), charVector.end());

        return ans;
    }
};