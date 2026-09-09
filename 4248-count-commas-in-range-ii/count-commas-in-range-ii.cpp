class Solution {
public:
    long long countCommas(long long n) {
        if (n < 1000)
            return 0;
        long long int count = 0;
        for (long long int i = 1000; i <= n; i *= 1000)
            count += n - i + 1;

        return count;
    }
};