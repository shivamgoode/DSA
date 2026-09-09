class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();

        int i = 0;

        while (i <= n1 - n2) {
            
            if (haystack.substr(i, n2) == needle) {
                return i;
            }

            i++;
        }

        return -1;
    }
};