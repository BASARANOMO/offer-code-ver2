class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool lower_bound) {
        int n = nums.size(), left = 0, right = n, mid;
        while (left < right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                if (lower_bound) right = mid;
                else left = mid + 1;
            }
            else if (nums[mid] > target) right = mid;
            else left = mid + 1;
        }
        return lower_bound ? left : right - 1;
    }
    int search(vector<int>& nums, int target) {
        int left_idx = binarySearch(nums, target, true);
        int right_idx = binarySearch(nums, target, false);
        return right_idx - left_idx + 1;
    }
};