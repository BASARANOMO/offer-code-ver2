class Solution {
public:
    vector<string> permutation(string s) {
        // backtracking
        vector<string> res;
        string curr("");
        unordered_map<char, int> alphabets;
        for (int i = 0; i < s.size(); i++) {
            if (alphabets.find(s[i]) == alphabets.end()) alphabets[s[i]] = 1;
            else alphabets[s[i]] += 1;
        }
        backtracking(s, 0, alphabets, curr, res);
        return res;

    }
    void backtracking(string s, int pos, unordered_map<char, int>& alphabets, string& curr, vector<string>& res) {
        if (pos == s.size()) {
            res.push_back(curr);
            return;
        }
        for(auto it = alphabets.begin(); it != alphabets.end(); it++) {
            if (it->second != 0) {
                curr += it->first;
                it->second -= 1;
                backtracking(s, pos+1, alphabets, curr, res);
                curr.pop_back();
                it->second += 1;
            }
        }
    }
};
