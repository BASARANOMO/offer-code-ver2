class Solution:
    def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
        if not matrix or len(matrix) == 0 or len(matrix[0]) == 0:
            return False
        n, m = len(matrix), len(matrix[0])
        for i in range(n):
            for j in range(m-1, -1, -1):
                if matrix[i][j] == target:
                    return True
                elif matrix[i][j] > target:
                    m -= 1
                elif matrix[i][j] < target:
                    break
        return False    
