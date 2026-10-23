class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        // 1st part find the pivot
        int piv = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                piv = i;
                break;
            }
        }
        if (piv == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        // 2nd part find the successor / next larger element than the pivot
        for (int i = n - 1; i >= 0; i--) {

            if (nums[i] > nums[piv]) {
                swap(nums[i], nums[piv]);
                break;
            }
        }
        // 3rd part reverse/sort the array from pivot to last element
        int m = piv + 1;
        int k = n - 1;
        while (m <= k) {
            swap(nums[m], nums[k]);
            m++;
            k--;
        }
    }
};