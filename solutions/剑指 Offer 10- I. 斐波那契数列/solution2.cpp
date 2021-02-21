class Solution {
public:
    int fib(int n) {
        // DP
        if (n==0) return 0;
        int a = 0;
        int b = 1;
        int sum;
        for (int i=2; i<=n; i++) {
            sum = (a + b) % int(1e9+7);
            a = b;
            b = sum;
        }
        return b;
    }
};
