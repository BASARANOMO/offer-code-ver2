class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid, count = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] < target) left = mid + 1;
            else if (nums[mid] > target) right = mid - 1;
            else {
                count++;
                left = mid;
                break;
            }
        }
        if (count > 0) {
            int i = left - 1, j = left + 1;
            while (i >= 0 && nums[i] == target) {
                count++;
                i--;
            }
            while (j < nums.size() && nums[j] == target) {
                count++;
                j++;
            }
        }
        return count;
    }
};