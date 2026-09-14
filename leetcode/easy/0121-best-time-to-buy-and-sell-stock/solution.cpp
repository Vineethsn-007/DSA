class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice=0;
        int bestBuy=prices[0];
        for(int i=1;i<size(prices);i++){
            if(prices[i]<bestBuy) bestBuy=prices[i];
            maxPrice=max(maxPrice,prices[i]-bestBuy);
        }
        return maxPrice;
    }
};