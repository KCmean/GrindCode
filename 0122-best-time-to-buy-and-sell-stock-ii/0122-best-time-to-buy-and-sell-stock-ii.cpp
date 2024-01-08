class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        
        int size = prices.size() ;
        
        for(int i = 1; i < size; i++ ){
            if(prices[i] > prices[i-1]){
                max_profit += (prices[i] - prices[i-1]);
            }
        }
        return max_profit;
    }
};