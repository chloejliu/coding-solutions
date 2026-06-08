//1-1
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> ans;
        for (int i = 0; i < s.length(); i++) {
            if (!ans.empty() && s[i] == ans.top()) {
                ans.pop();                
            }
            else {
                ans.push(s[i]);
            }
        }
        string str = "";
        while (!ans.empty()) {
            str = ans.top() + str;
            ans.pop();
        }
        return str;
    }
};
