class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int t = 0;
        for (int i = 0; i < nums.size(); i++) {
            t += nums[i];
        }
        if (t % k == 0)
            return 0;
        else
            return t % k;
    }
};