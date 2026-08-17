class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int> ans;
       unordered_map<int, int> count;
       int n = grid.size();
       int temp_sum = 0;
       int missing;
      
       for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
            temp_sum += grid[i][j];
         }
       }

       for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
            count[grid[i][j]]++;
         }
       }

       for(auto c : count){
        if(c.second == 2){
           missing = (((n * n) * ((n * n) + 1)) / 2) + c.first - temp_sum;

          if(missing <0){
            missing = -1 * missing;

          }
          ans.push_back(c.first);
          ans.push_back(missing);

          break;
        }
        
       }

       return ans;
    }
};