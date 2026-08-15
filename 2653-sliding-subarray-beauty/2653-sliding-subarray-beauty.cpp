class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {

        int n = nums.size();

        vector<int> ans;

        int freq[51] = {0};

        // First window
        for(int i = 0; i < k; i++) {
            if(nums[i] < 0) {
                freq[-nums[i]]++;
            }
        }

        // Process each window
        for(int right = k-1; right < n; right++) {

            // Find x-th smallest negative
            int count = 0;
            int beauty = 0;

            for(int i = 50; i >= 1; i--) {

                count += freq[i];

                if(count >= x) {
                    beauty = -i;
                    break;
                }
            }

            ans.push_back(beauty);

            // Remove left element
            int left = right - k + 1;

            if(nums[left] < 0) {
                freq[-nums[left]]--;
            }

            // Add next element
            if(right + 1 < n && nums[right + 1] < 0) {
                freq[-nums[right + 1]]++;
            }
        }

        return ans;
    }
};