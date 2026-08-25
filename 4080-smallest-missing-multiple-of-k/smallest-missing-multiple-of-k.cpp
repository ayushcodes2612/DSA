class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int multiple = k;
       
        while(true){
             bool small = false;
        for(int i = 0; i<n; i++)
            if (nums[i] == multiple) {
                small = true;         
                break;
            }
            if(small == false)
            return multiple;
             multiple += k;
        }
            return 0;
        }
    };