class Solution:
    def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
        if len(matrix) == 0 or len(matrix[0]) == 0:
            return False
        for row in matrix:
            if (row[0] > target) or (row[-1] < target):
                continue
            else:  # binary search
                if self.bin_search(row, target):
                    return True
        return False

    def bin_search(self, nums: List[int], target: int) -> bool:
        front, end = 0, len(nums) - 1
        while front <= end:
            mid = (front + end) // 2
            if nums[mid] < target:
                front = mid + 1
            elif nums[mid] > target:
                end = mid - 1
            else:
                return True
        return False
