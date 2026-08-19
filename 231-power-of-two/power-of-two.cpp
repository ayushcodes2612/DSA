class Solution {
public:
    bool isPowerOfTwo(long n) {
        if(n == 1)
        return true;
        if(n == 0)
        return false;

        if((n & n-1) == 0)
        return true;
        else 
        return false;

    }
};