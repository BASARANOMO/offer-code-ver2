class Solution {
public:
    char firstUniqChar(string s) {
        int n = s.size();
        vector<int> times(26, 0);
        for (int i = 0; i < n; i++) {
            times[s[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            if (times[s[i] - 'a'] == 1) return s[i];
        }
        return ' ';
    }
};