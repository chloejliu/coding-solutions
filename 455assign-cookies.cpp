//1-2
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = 0, j = 0; i < g.size() && j < s.size(); j++) {
            if (s[j] >= g[i]) {
                ans++;
                i++;
            }
        }
        return ans;
    }
};
