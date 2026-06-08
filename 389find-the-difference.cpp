//1-1
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> sCount;
        for (int i = 0; i < s.length(); i++) {
            if (sCount.find(s[i]) == sCount.end()) {
                sCount[s[i]] = 1;
            }
            else {
                sCount[s[i]]++;
            }
        }
        for (int i = 0; i < t.length(); i++) {
            if (sCount.find(t[i]) == sCount.end() || sCount[t[i]] == 0) {
                return t[i];
            }
            else {
                sCount[t[i]]--;
            }
        }
        return 0;
    }
};
