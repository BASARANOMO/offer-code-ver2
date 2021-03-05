class Solution {
public:
    int translateNum(int num) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
        int currPos, prevPos = 0;
        while (num > 0) {
            currPos = num % 10;
            num /= 10;
            if (currPos * 10 + prevPos > 25 || currPos == 0) dp.push_back(dp.back());
            else dp.push_back(*(dp.end() - 2) + dp.back());
            prevPos = currPos;
        }
        return dp.back();
    }
};