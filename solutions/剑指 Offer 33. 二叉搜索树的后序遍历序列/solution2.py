class Solution:
    def verifyPostorder(self, postorder: List[int]) -> bool:
        mntn_stk, parent = [], float("inf")
        for i in range(len(postorder) - 1, -1, -1):
            if postorder[i] > parent:
                return False
            while mntn_stk and postorder[i] < mntn_stk[-1]:
                parent = mntn_stk.pop()
            mntn_stk.append(postorder[i])
        return True
