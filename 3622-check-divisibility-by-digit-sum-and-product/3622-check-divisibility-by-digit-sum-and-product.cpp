class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long product = 1;
        long long no = n;
        while (no > 0) {
            int digit = no % 10;
            sum += digit;
            product *= digit;
            no /= 10;
        }
        long long result = sum + product;
        if (n % result == 0)
            return true;
        return false;
    }
};