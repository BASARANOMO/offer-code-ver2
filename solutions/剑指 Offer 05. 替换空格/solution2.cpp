class Solution {
public:
    string replaceSpace(string s) {
        int s_len = s.length();
        int count = 0;
        for (auto c : s) {
            if (c == ' ') {
                count += 1;
            }
        }
        s.resize(s_len + 2 * count);

        for (int i = s_len - 1, j = s.length() - 1; i < j; i--, j--) {
            if (s[i] == ' ') {
                s[j-2] = '%';
                s[j-1] = '2';
                s[j] = '0';
                j -= 2;
            }
            else {
                s[j] = s[i];
            }
        }
        return s;
    }
};
