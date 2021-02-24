class Solution {
public:
    int cuttingRope(int n) {
        int div, rem;
        int res = 1;
        int temp = 1;
        for (int i = 2; i <= n + 1; i++) {
            div = n / i;
            rem = n % i;
            temp = multiplier(i, div, rem);
            res = temp > res ? temp : res;
        }
        return res;
    }

    int multiplier(int m, int div, int rem) {
        int res = 1;
        for (int i = 0; i < m - rem; i++) {
            res *= div;
        }
        for (int i = 0; i < rem; i++) {
            res *= (div + 1);
        }
        return res;
    }
};
