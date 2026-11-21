class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
        int i, j;

        // Find the length of the shortest string
        int minLen = strs[0].length();

        for (int i = 1; i < n; i++) {
            minLen = min(minLen, (int)strs[i].length());
        }

        // Traverse column-wise
        for (j = 0; j < minLen; j++) {

            for (i = 0; i < n - 1; i++) {

                if (strs[i][j] != strs[i + 1][j]) {

                    return strs[0].substr(0, j);

                }
            }
        }

        // If no mismatch is found
        return strs[0].substr(0, minLen);
    }
};
