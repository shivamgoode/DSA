class Solution {
public:
    string convert(string s, int numRows) {
        
        // If there is only one row, there is no zigzag
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        vector<string> rows(numRows);

        int currentRow = 0;
        bool goingDown = false;

        for (char ch : s) {
            rows[currentRow] += ch;

            // Change direction at the top and bottom
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            if (goingDown) {
                currentRow++;
            } else {
                currentRow--;
            }
        }

        // Combine all rows
        string answer = "";

        for (string row : rows) {
            answer += row;
        }

        return answer;
    }
};