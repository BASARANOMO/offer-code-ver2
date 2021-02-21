# 剑指 Offer 09. 用两个栈实现队列
[LeetCode-cn链接](https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/)

## 解法1
始终用stack1存储数据，stack2仅在deleteHead时使用，使用后将剩余数据放置回stack1中。

## 解法2
用stack1和stack2共同存储数据。stack1只负责进栈，stack2仅负责出栈。
