class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        int totalsum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            totalsum += nums[i];
        }
        while(totalsum%k!=0)
        {
            if(totalsum%k==0)
        return 0;
        else
        totalsum--;
        count++;
        }
        return count;
    }
};