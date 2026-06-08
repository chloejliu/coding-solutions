//1-2
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int curLength = 0;
        unordered_map<char, int> sub;
        for (int i = 0; i < s.length(); i++) {
            if (sub.find(s[i]) == sub.end()) {
                sub[s[i]] = i;
                curLength++;
            }
            else {
                longest = max(longest, curLength);
                i = sub.find(s[i])->second;
                curLength = 0;
                sub.clear();
            }
        }
        return max(longest, curLength);
    }
};
