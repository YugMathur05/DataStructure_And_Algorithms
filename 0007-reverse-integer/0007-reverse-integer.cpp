class Solution {
public:
    int reverse(int x) {
        long long rev = 0;

        long long n = x;
        if (n < 0)
            n *= (-1);
        while (n > 0) {
            long long digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
        if (x < 0) {
            rev *= (-1);
        }
        if (rev > INT_MAX || rev < INT_MIN)
            return 0;
        return rev;
    }
};