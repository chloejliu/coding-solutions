//1-1
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hm;
        for (int i = 0; i < s.length(); i++) {
            if (hm.find(s[i])==hm.end()) {
                hm[s[i]] = 1;
            }
            else {
                hm[s[i]]++;
            }
        }
        int ans = 0;
        bool oddUsed = false;
        for (auto it = hm.begin(); it != hm.end(); ++it) {
            if (it->second % 2 == 1 && !oddUsed) {
                ans += it->second;
                oddUsed = true;
            }
            else if (it->second % 2 == 1) {
                ans += it->second-1;
            }
            else {
                ans += it->second;
            }
        }
        return ans;
    }
};
