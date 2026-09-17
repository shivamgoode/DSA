class Solution {
public:
    int divide(int dividend, int divisor) {

        // Special overflow case:
        // -2147483648 / -1 = 2147483648
        // which is outside 32-bit signed integer range.
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine the sign of the answer
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to long long before taking absolute value
        // because abs(INT_MIN) cannot be stored in an int.
        long long dvd = dividend;
        long long dvs = divisor;

        if (dvd < 0)
            dvd = -dvd;

        if (dvs < 0)
            dvs = -dvs;

        long long quotient = 0;

        // Find the quotient using powers of 2
        while (dvd >= dvs) {

            long long temp = dvs;
            long long multiple = 1;

            // Find the largest doubled divisor that fits
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            // Subtract that multiple
            dvd -= temp;

            // Add corresponding power of 2 to quotient
            quotient += multiple;
        }

        // Apply sign
        if (negative)
            quotient = -quotient;

        // Clamp to 32-bit signed integer range
        if (quotient > INT_MAX)
            return INT_MAX;

        if (quotient < INT_MIN)
            return INT_MIN;

        return (int)quotient;
    }
};