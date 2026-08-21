class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top=0 ,left=0;
        int right = matrix[0].size() - 1; 
        int bottom= (matrix.size())-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            if(matrix.size()>=1){
            top++;

            for(int j=top;j<=bottom;j++){
               ans.push_back( matrix[j][right]);
            }}

            right--;
            if(top<=bottom){
            for(int l=right;l>=left;l--){
               ans.push_back( matrix[bottom][l]);
            }
            bottom--;
            }
          if(left <= right) {
        for(int l=bottom;l>=top;l--){
               ans.push_back( matrix[l][left]);
            }
            left++;
          }
        
          }
    return ans; 
}  
    
};