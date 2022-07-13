class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>sell){
                sell=prices[i];
            }
            if(prices[i]<buy){
                buy=prices[i];
                sell=prices[i];
            }
            if(sell-buy>profit){
                profit=sell-buy;
            }
        }
        return profit;
    }
};