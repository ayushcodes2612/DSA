class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        int I1 = 0, I2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maximum) {
                maximum = nums[i];
                I1 = i + 1;
            }
            if (nums[i] < minimum) {
                minimum = nums[i];
                I2 = i + 1;
            }
        }
        int l = max(I1, I2);
        int r = n - min(I1, I2) + 1;
        int b = min(I1, I2) + n - l + 1;
        return min({l, r, b});
    }
};