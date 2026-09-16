class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();

        int start = 0;
        int maxLen = 1;

        // Function to expand around a center
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }

            // After the loop:
            // left and right are one position outside the palindrome
            int len = right - left - 1;

            if (len > maxLen) {
                maxLen = len;
                start = left + 1;
            }
        };

        for (int i = 0; i < n; i++) {

            // Odd length palindrome
            expand(i, i);

            // Even length palindrome
            expand(i, i + 1);
        }

        return s.substr(start, maxLen);
    }
};