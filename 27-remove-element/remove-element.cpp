class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0, j = n - 1;
        for (int i = 0; i <= j; i++) {
            if (nums[i] != val) {
                k++;
            } else {
                swap(nums[i], nums[j]);
                i--;
                j--;
            }
        }
        return k;
    }
};