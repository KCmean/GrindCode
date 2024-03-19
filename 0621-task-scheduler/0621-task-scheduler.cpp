class Solution {
 public:
  int leastInterval(vector<char>& tasks, int n) {
    if (n == 0)
      return tasks.size();

    vector<int> count(26);

    for (const char task : tasks)
      ++count[task - 'A'];

    const int maxFreq = ranges::max(count);
      
    const int maxFreqTaskOccupy = (maxFreq - 1) * (n + 1);
      
    const int nMaxFreq = ranges::count(count, maxFreq);
      
    return max(maxFreqTaskOccupy + nMaxFreq, static_cast<int>(tasks.size()));
  }
};