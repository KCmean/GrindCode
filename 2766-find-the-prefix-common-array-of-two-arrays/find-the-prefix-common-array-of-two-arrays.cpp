class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        vector<int> p(n);
        vector<int> a(n+1,0);
        vector<int> b(n+1,0);

        for(int i = 0; i < n; ++i){

            ++a[A[i]];
            ++b[B[i]];

            for(int j = 1; j <= n; ++j){
                p[i] += min(a[j] ,b[j]);
            }
        }
                   return p;
 
        }
};