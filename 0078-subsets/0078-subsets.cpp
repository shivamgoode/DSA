class Solution {
public:
    vector<vector<int>> result;
    vector<int> ans;

    void sub(vector<int>& nums, int i) {
        int n = nums.size();

        if (i == n) {
            result.push_back(ans);
            return;
        }

        // Take nums[i]
        ans.push_back(nums[i]);
        sub(nums, i + 1);

        // Don't take nums[i]
        ans.pop_back();
        sub(nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        sub(nums, 0);
        return result;
    }
};