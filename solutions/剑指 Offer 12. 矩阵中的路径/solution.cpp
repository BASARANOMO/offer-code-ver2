class Solution {
private:
    int m;
    int n;
public:
    bool exist(vector<vector<char>>& board, string word) {
        // depth first search
        m = board.size();
        n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || board[i][j] != word[k]) return false;
        if (k == word.size() - 1) return true;
        board[i][j] = '\0';
        bool flag = dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i, j + 1, k + 1) || dfs(board, word, i - 1, j, k + 1) || dfs(board, word, i, j - 1, k + 1);
        board[i][j] = word[k]; // backtracking
        return flag;
    }
};