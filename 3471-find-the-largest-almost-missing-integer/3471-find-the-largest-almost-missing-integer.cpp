class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int ans = -1;
        int n = nums.size();

        int left = 0;
        int right = k - 1;

        for(int i = 0; i <= n - k; i++) {
            unordered_map<int,bool> visited;
            for(int j = left; j <= right; j++) {
                if(!visited[nums[j]])
                    count[nums[j]]++;
                visited[nums[j]]=true;
            }

            left++;
            right++;
        }

        for(auto c : count) {
            if(c.second == 1) {
                ans = max(ans, c.first);
            }
        }

        return ans;
    }
};