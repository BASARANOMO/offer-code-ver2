class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> res(k, 0);
        if (k == 0) return res;
        priority_queue<int> maxHeap;
        for (int i = 0; i < k; i++) {
            maxHeap.push(arr[i]);
        }
        for (int i = k; i < arr.size(); i++) {
            if (maxHeap.top() > arr[i]) {
                maxHeap.pop();
                maxHeap.push(arr[i]);
            }
        }
        for (int i = 0; i < k; i++) {
            res[i] = maxHeap.top();
            maxHeap.pop();
        }
        return res;
    }
};
