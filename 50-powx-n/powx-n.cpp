class Solution {
public:
    double fastPow(double x, long long n) {
        if (n == 0)
            return 1.0;

        double half = fastPow(x, n / 2);

        if (n % 2 == 0)
            return half * half;

        return half * half * x;
    }

    double myPow(double x, int n) {
        long long power = n;
        bool negative = power < 0;

        if (negative)
            power = -power;

        double ans = fastPow(x, power);

        return negative ? 1.0 / ans : ans;
    }
};