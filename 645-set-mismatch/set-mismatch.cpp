class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int arrtotal = 0;
        int total = (n * (n + 1)) / 2;
        for (int i = 0; i < n; i++) {
            arrtotal += nums[i];
        }
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                ans.push_back(nums[i]);
                break;
            };
        }
        int newnum = total - arrtotal;
        ans.push_back(newnum+ans[0]);
        return ans;
    }
};