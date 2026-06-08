//1-1
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sCnt;
        
        for (int i = 0; i < s.length(); i++) {
            
            if (sCnt.find(s[i]) == sCnt.end()) {
                sCnt[s[i]] = 1;
            }
            else {
                sCnt[s[i]]++;
            }
        }

        for (int i = 0; i < t.length(); i++) {
            
            if (sCnt.find(t[i]) == sCnt.end()) {
                return false;
            }
            else {
                sCnt[t[i]]--;
                
                if (sCnt[t[i]] < 0) {
                    return false;
                }
            }
        }
        
        for (int i = 0; i < s.length(); i++) {
            
            if (sCnt[s[i]] != 0) {
                return false;
            }
        }
        return true;
    }
};
