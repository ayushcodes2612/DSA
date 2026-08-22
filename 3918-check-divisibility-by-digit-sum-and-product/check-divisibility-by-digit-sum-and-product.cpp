class Solution {
public:
    bool checkDivisibility(int n)
     {
        int sum = 0;
        int product = 1;
        int og = n;
        while(n>0)
    { 
        int digit = n%10;
        n /= 10;
        sum += digit;
        product *= digit;
    }
        int total = sum + product;
        if(og % total == 0)
        return true;
        else 
        return false;
    }
};