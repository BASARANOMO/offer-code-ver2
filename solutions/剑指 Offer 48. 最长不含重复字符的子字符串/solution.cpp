class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start_idx = 0;
        int max_so_far = 0;
        int max_length = 0;
        unordered_map<char, int> idx_map;
        for (int curr_idx = 0; curr_idx < s.size(); curr_idx++) {
            if (idx_map.find(s[curr_idx]) != idx_map.end()) {
                start_idx = start_idx < idx_map[s[curr_idx]] + 1 ? idx_map[s[curr_idx]] + 1 : start_idx;
                max_so_far = curr_idx - start_idx + 1;
            }
            else {
                max_so_far += 1;
            }
            max_length = max_so_far > max_length ? max_so_far : max_length;
            idx_map[s[curr_idx]] = curr_idx;
        }
        return max_length;
    }
};