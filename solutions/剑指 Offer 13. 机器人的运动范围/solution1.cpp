class Solution {
public:
    int movingCount(int m, int n, int k) {
        vector<vector<bool>> matrix(m, vector<bool>(n, 0));
        return backtracking(m, n, k, matrix, 0, 0);
    }
    
    int backtracking(int m, int n, int k, vector<vector<bool>>& matrix, int i, int j) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || sums(i, j) > k || matrix[i][j]) return 0;
        matrix[i][j] = true;
        return 1 + backtracking(m, n, k, matrix, i + 1, j) + backtracking(m, n, k, matrix, i, j + 1) + backtracking(m, n, k, matrix, i - 1, j) + backtracking(m, n, k, matrix, i, j - 1);
    }

    int sums(int i, int j) {
        int sum = 0;
        while (i > 0) {
            sum += i % 10;
            i = i / 10;
        }
        while (j > 0) {
            sum += j % 10;
            j = j / 10;
        }
        return sum;
    }
};