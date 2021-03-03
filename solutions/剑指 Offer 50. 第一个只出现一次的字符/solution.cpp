class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, int> hashMap;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            hashMap[s[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (hashMap[s[i]] == 1) return s[i];
        }
        return ' ';
    }
};