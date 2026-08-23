class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> result;
        int n = candies.size();
        for(int i = 0; i<n; i++)
        {
            if(candies[i]>max)
            max = candies[i]; 
        }
        for(int j = 0; j<n; j++)
        {
         if(extraCandies + candies[j] >= max)
        result.push_back(true);
         else
        result.push_back(false);   
        }
        return result;
    }
};