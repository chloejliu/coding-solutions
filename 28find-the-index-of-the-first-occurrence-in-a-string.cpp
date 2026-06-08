//1-1
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int left = 0; left < haystack.size(); left++) {
            if (haystack.substr(left, needle.size()) == needle) {
                return left;
            }
        }
        return -1;
    }
};
