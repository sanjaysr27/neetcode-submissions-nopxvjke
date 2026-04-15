class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int len = prices.size();
        int maxprofit = 0;
        for(int sell=0;sell<len;sell++){
            if(prices[buy]>prices[sell]) {
                buy = sell;
            }
            else {
                int profit = prices[sell] - prices[buy];
                maxprofit = max(maxprofit, profit);
            }
        }
        return maxprofit;
    }
};
