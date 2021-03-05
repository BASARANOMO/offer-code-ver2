class Solution {
public:
    int translateNum(int num) {
        int currVal = 1, prevVal = 0, temp;
        int currPos, prevPos = 0;
        while (num > 0) {
            currPos = num % 10;
            num /= 10;
            if (currPos * 10 + prevPos > 25 || currPos == 0) prevVal = currVal;
            else {
                temp = currVal;
                currVal += prevVal;
                prevVal = temp;
            }
            prevPos = currPos;
        }
        return currVal;
    }
};