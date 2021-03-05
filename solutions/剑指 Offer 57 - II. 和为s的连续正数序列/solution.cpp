class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> res;
        vector<int> curr;
        int left = 1, right = 2, sum;
        while (left < right) {
            sum = (left + right) * (right - left + 1) / 2;
            if (sum == target) {
                curr.clear();
                for (int i = left; i <= right; i++) {
                    curr.push_back(i);
                }
                res.push_back(curr);
                left++;
                right++;
            }
            if (sum < target) right++;
            if (sum > target) left++;
        }
        return res;
    }
};