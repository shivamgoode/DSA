class Solution {
public:
    vector<string> ans;

    void backtrack(string s, int open, int close, int n) {
        // A complete valid combination is formed
        if (open == n && close == n) {
            ans.push_back(s);
            return;
        }

        // Add opening parenthesis
        if (open < n) {
            backtrack(s + "(", open + 1, close, n);
        }

        // Add closing parenthesis
        if (close < open) {
            backtrack(s + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return ans;
    }
};