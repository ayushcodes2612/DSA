class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        for (int i = 0; i < n; i++) {
            int large = nums[i], small = nums[i];
            for (int j = 0; j < i; j++) {
                if (nums[j] > large)
                    large = nums[j];
            }
            for (int j = i+1; j < n; j++) {
                if (nums[j] < small)
                    small = nums[j];
            }
            if (large-small <= k)
               return i;
        }
        return -1;
    }
};