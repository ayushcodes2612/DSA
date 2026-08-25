class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int f=0,ans=nums[0];
    for(int val : nums)
    {
         if(f==0)
        ans=val;
        if(ans==val)
        f++;
        else
        f--;
    }
    return ans;
    }
};