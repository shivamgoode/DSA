class Solution {
public:

    int bs(vector<int>& nums, int target, int start, int end) {

        if (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (target > nums[mid]) {
                return bs(nums, target, mid + 1, end);
            }
            else {
                return bs(nums, target, start, mid - 1);
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();

        return bs(nums, target, 0, n - 1);
    }
};