class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MP = 0;
        int Bb = prices[0];
        for(int i = 1; i<prices.size(); i++)
        {
            if(prices[i] > Bb)
            {
                MP = max(MP , prices[i]- Bb);
            }
            Bb = min(Bb , prices[i]);
        }
    return MP;
    }
};