class Solution {
public:


    int solve (int n, int i , unordered_map<int,int> &umap){

        // return umap[n] = i;

        if(i == n){
            return 1;
        }
        if(i > n){
            return 0;
        }
        
        if(umap.count(i) != 0) return umap[i];



        return umap[i] = solve(n,i+1,umap) + solve(n,i+2,umap);
        
    }
    int climbStairs(int n) {

        unordered_map<int,int> umap;
        return solve(n,0,umap);
    }
};