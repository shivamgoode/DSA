class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int low = 0;
        int high = k - 1;
        int sum = 0;
        int n = arr.size();

        // First window
        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int ans = sum;

        // Slide the window
        while(high + 1 < n) {
            high++;

            sum = sum - arr[low] + arr[high];

            low++;

            ans = max(ans, sum);
        }

        return ans;
    }
};