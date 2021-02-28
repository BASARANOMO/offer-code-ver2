class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return {};
        vector<int> res;
        int m = matrix.size();
        int n = matrix[0].size();
        int round = 0;
        while (round < float(min(m, n)) / 2) {
            for (int i = round; i < n-round; i++) res.push_back(matrix[round][i]);
            for (int i = round+1; i < m-round; i++) res.push_back(matrix[i][n-1-round]);
            if (m == 2 * round + 1 || n == 2 * round + 1) break;
            for (int i = n-2-round; i >= round; i--) res.push_back(matrix[m-1-round][i]);
            for (int i = m-2-round; i > round; i--) res.push_back(matrix[i][round]);
            round += 1;
        }
        return res;
    }
};