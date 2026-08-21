class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
      long long  int temp = 0;
        if(x<0)
        return false;
        while(x>0)
        {
            int digit = x%10;
            temp = temp*10 + digit;
            x /= 10;  
               
        }
        if(num==temp)
        return true;
        else
       return false;
    }
};