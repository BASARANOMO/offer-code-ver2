class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_ending_here = nums[0];
        int max_so_far = nums[0];
        for (int i = 1; i < n; i++) {
            max_ending_here = (max_ending_here + nums[i]) > nums[i] ? (max_ending_here + nums[i]) : nums[i];
            max_so_far = max_ending_here > max_so_far ? max_ending_here : max_so_far;
        }
        return max_so_far;
    }
};
