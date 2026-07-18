class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int bought=prices[0];
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < bought){
                bought= min(bought,prices[i]);
            }
            profit=max(profit,prices[i]-bought);
        }
        return profit;
    }
};