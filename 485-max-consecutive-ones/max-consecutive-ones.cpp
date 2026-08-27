class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int i = 0;
        int maximum = 0;
        while(i<n)
        {
            if(nums[i]==1)
            count++;

           
            maximum = max(maximum,count);
            if(nums[i]==0)
            count = 0;

            i++;
        }
        return maximum;
    }
};