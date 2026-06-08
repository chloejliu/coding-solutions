//1-5
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> code;
        unordered_map<string, bool> used;
        vector<string> words(pattern.length() + 1);
        string tmp = "";
        int j = 0;
        for (int i = 0; i < s.length() && j < words.size()-1; i++) {
            if (s[i] == ' ') {
                words[j] = tmp;
                tmp = "";
                j++;
            }
            else {
                tmp += s[i];
            }
        }
        words[j] = tmp;
        string ans = "";
        int increment = 0;
        for (int i = 0; i < pattern.length(); i ++) {
            if (code.find(pattern[i]) == code.end()) {
                if (used.find(words[i]) == used.end()) {
                    used[words[i]] = true;
                    code[pattern[i]] = words[i];
                }
                else {
                    return false;
                }
            }
            ans += code[pattern[i]] + " ";
        }
        cout << ans;
        return ans == (s + " ");
    }
};
