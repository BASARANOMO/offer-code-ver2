class Solution {
public:
    int numWays(int n) {
        if (n==0) return 1;
        int prev1 = 1;
        int prev2 = 1;
        int curr;
        for (int i=2; i<=n; i++) {
            curr = (prev1 + prev2) % 1000000007;
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};
