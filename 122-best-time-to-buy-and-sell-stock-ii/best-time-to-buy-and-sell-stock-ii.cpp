class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0],maxprofit2=0;

        for(int i=1;i<prices.size();i++){
            
            if(prices[i]>prices[i-1]){
                maxprofit2+=prices[i]-prices[i-1];
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxprofit2;
    }
};