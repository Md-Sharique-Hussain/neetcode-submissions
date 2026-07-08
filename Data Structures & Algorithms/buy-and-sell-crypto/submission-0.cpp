class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = INT_MIN ;
        int low = prices[0];
        int n = prices.size();
        for(int i=0;i<n;i++){
            low = min(low,prices[i]);
            max_profit = max(max_profit,prices[i]-low);
        }
        return max_profit;
    }
};
