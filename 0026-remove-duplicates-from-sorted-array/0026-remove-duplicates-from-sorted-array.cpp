class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        int i = 0;

        while (i < n) {
            ans.push_back(nums[i]);

            while (i + 1 < n && nums[i] == nums[i + 1]) {
                i++;
            }

            i++;
        }

        int k = ans.size();

        for (int j = 0; j < k; j++) {
            nums[j] = ans[j];
        }

        return k;
    }
};