class Solution {
public:
    int minArray(vector<int>& numbers) {
        int len_vec = numbers.size();
        int left = 0;
        int right = len_vec - 1;
        int mid;
        while (left < right) {
            mid = (left + right) / 2;
            if (numbers[mid] < numbers[right]) {
                right = mid;
            }
            else if (numbers[mid] > numbers[right]) {
                left = mid + 1;
            }
            else { // equal
                right -= 1;
            }
        }
        return numbers[right];
    }
};
