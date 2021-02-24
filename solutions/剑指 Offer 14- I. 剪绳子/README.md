# 剑指 Offer 14- I. 剪绳子
[LeetCode-cn link](https://leetcode-cn.com/problems/jian-sheng-zi-lcof/)

## 解法
观察到，最优解各段绳子之间长度差不超过1

可根据几何均值不等式得到结论：对于给定的绳子段数，各段绳子长度相等时乘积最大。题中要求绳子长度为整数则有以上结论。

而实际上可以进一步得出，尽量以长度3进行分段结果最优。
