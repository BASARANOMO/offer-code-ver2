class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (mid == nums[mid]) {
                left = mid + 1;
            }
            else if (mid < nums[mid]) {
                right = mid - 1;
            }
        }
        return left;
    }
};