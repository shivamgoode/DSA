class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(vector<int>& nums, int start) {
        // Every current temp is a valid subset
        ans.push_back(temp);

        for (int i = start; i < nums.size(); i++) {

            // Skip duplicate elements at the same level
            if (i > start && nums[i] == nums[i - 1])
                continue;

            temp.push_back(nums[i]);

            backtrack(nums, i + 1);

            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // Very important for detecting duplicates
        sort(nums.begin(), nums.end());

        backtrack(nums, 0);

        return ans;
    }
};