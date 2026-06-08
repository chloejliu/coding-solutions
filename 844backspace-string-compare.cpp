//1-5
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> bigS;
        stack<char> bigT;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#' && !bigS.empty()) {
                bigS.pop();
            }
            else if (s[i] != '#') {
                bigS.push(s[i]);
            }
        }
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#' && !bigT.empty()) {
                bigT.pop();
            }
            else if (t[i] != '#') {
                bigT.push(t[i]);
            }
        }
        while (!bigS.empty() && !bigT.empty()) {
            if (bigS.top() != bigT.top()) {
                return false;
            }
            bigS.pop();
            bigT.pop();
        }
        return bigT.empty() && bigS.empty();
    }
};
