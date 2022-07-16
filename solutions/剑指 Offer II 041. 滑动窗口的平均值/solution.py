class MovingAverage:

    def __init__(self, size: int):
        """
        Initialize your data structure here.
        """
        self.size = size
        self.q = deque()
        self.total_val = 0

    def next(self, val: int) -> float:
        if len(self.q) == self.size:
            self.total_val -= self.q.popleft()
        self.total_val += val
        self.q.append(val)
        return self.total_val / len(self.q)

# Your MovingAverage object will be instantiated and called as such:
# obj = MovingAverage(size)
# param_1 = obj.next(val)