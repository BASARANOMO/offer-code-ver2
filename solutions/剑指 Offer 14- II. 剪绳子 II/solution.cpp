class Solution {
public:
    int cuttingRope(int n) {
        if (n <= 3) return n - 1;
        int m = n / 3;
        int rem = n % 3;
        long res = 1;
        while (m > 1) {
            res = (3 * res) % 1000000007;
            m -= 1;
        }
        if (rem == 1) {
            res = (res * 4) % 1000000007;
        }
        else if (rem == 2) {
            res = (res * 6) % 1000000007;
        }
        else {
            res = (res * 3) % 1000000007;
        }
        return int(res);
    }
};