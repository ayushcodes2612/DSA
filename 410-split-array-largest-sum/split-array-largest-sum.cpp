class Solution {
public:
    bool allocatebooks(vector<int>& nums, int k, int n, int mid) {
        int stud = 1, pages = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > mid)
                return false;
            if (pages + nums[i] <= mid) {
                pages += nums[i];
            } else {
                stud++;
                pages = nums[i];
            }
        }
        if (stud <= k)
            return true;
        else
            return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;
        int sum = 0;
        if (k > n)
            return -1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int st = 0, end = sum;
        int mid = st + (end - st) / 2;
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (allocatebooks(nums, k, n, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};