class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxwt = 0;
        int i = 0, j = n - 1;
        while (i < j) {
            int wid = j - i;
            int ht = min(height[i], height[j]);
          int currwater = wid * ht;
            maxwt = max(maxwt, currwater);
            height[i] < height[j] ? i++ : j--;
        }
        return maxwt;
    }
};