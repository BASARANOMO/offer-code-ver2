class Solution {
public:
    int fib(int n) {
        // DP
        vector<int> res;
        res.push_back(0);
        res.push_back(1);
        for (int i=2; i<=n; i++) {
            res.push_back((res[i-1] + res[i-2]) % int(1e9+7));
        }
        return res[n];
    }
};
