class Solution {
public:
    int minArray(vector<int>& numbers) {
        int len_vec = numbers.size();
        for (int i=1; i<len_vec; i++) {
            if (numbers[i] < numbers[i-1]) return numbers[i];
        }
        return numbers[0];
    }
};
