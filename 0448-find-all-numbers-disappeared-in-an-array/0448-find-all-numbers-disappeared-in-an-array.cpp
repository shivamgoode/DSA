class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;
        
        int n = nums.size();

        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }

        int j = 1;

        while(j <= n){
            if(st.find(j) == st.end()){
                ans.push_back(j);
            }
            j++;
        }

        return ans;
    }
};