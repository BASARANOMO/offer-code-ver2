class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int n = nums.size();
        int temp;
        int p = n - 1;
        for (int i = 0; i < p; i++) {
            if (!(nums[i]&1)) {
                temp = nums[i];
                nums[i] = nums[p];
                nums[p] = temp;
                i--;
                p--;
            }
        }
        return nums;
    }
};
