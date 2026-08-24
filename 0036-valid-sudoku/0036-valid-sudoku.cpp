class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N=9;
       vector<unordered_set<char>> rows(N);
        vector<unordered_set<char>> cols(N);
        vector<unordered_set<char>> boxes(N);
        for(int r=0;r<N;r++){
            for(int c=0;c<N;c++){
                int val= board[r][c];
                if(val=='.'){
                    continue;
                }
                if(rows[r].count(val)){
                    return false;
                }
                rows[r].insert(val);
                if(cols[c].count(val)){
                    return false;
                }
                cols[c].insert(val);

                int idx = (r/3)*3 +(c/3);
                if(boxes[idx].count(val)){
                    return false;
                }
                boxes[idx].insert(val);


            }
        }
        return true;
        
    }
};