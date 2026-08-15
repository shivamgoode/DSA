class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low =0;
        int high=0;
        int sum=0;
        
        int ans= INT_MAX;
        while(high<n){
            sum= sum + nums[high];

            while(sum>=target){
                ans= min(ans, (high - low + 1));
                sum-= nums[low];
                low++;

            }
            
        high++;
        }
        if(ans==INT_MAX){
            return 0;
        }
        
       
       return ans;
        
    }
};