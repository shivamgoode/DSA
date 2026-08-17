class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;
        int count = 0;
        int ans;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;

            if (mp[nums[i]] > int(n / 2)) {
                count = max(count, mp[nums[i]]);
            }
        }

        for (auto it : mp) {
            if (it.second == count) {
                ans = it.first;
            }
        }

        return ans;
    }
};