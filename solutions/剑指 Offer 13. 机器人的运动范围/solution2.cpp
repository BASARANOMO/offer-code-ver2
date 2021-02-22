class Solution {
public:
    int movingCount(int m, int n, int k) {
        // bfs
        int res = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, 0));
        queue<tuple<int, int>> q; // (idx i, idx j)
        q.push(tuple<int, int>(0, 0));
        tuple<int, int> temp;
        int i;
        int j;
        while (!q.empty()) {
            temp = q.front();
            q.pop();
            i = get<0>(temp);
            j = get<1>(temp);
            if (i < m && j < n && sums(i, j) <= k && !visited[i][j]) {
                res += 1;
                if (i < m - 1) q.push(tuple<int, int>(i+1, j));
                if (j < n - 1) q.push(tuple<int, int>(i, j+1));
            }
            visited[i][j] = 1;
        }
        
        return res;
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