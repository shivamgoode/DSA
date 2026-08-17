class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        if(n == 1)
            return nums[0];

        if(nums[0] != nums[1])
            return nums[0];

        for(int i = 1; i < n - 1; i++) {
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) {
                return nums[i];
            }
        }

        return nums[n-1];
    }
};
