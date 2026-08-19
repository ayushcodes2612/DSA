class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MP = 0;
        int n = prices.size();
        int bestbuy = prices[0];
        for(int i = 1; i<n; i++)
        {
            if(prices[i] > bestbuy)
            {
                MP = max(MP , prices[i]- bestbuy);
            }
            bestbuy = min(bestbuy , prices[i]);
        }
    return MP;
    }
};