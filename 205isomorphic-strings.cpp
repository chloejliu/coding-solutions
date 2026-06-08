//1-2
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> code;
        unordered_map<char, bool> tUsed;
        string ans = "";
        for (int i = 0; i < t.length(); i++) {
            tUsed[t[i]] = false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (code.find(s[i]) == code.end() && !tUsed[t[i]]) {
                code[s[i]] = t[i];
                tUsed[t[i]] = true;
            }
            else if (code.find(s[i]) == code.end() && tUsed[t[i]]) {
                return false;
            }
            ans += code[s[i]];
        }
        return ans == t;
    }
};
