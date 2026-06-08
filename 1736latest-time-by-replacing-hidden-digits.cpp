//1-3
class Solution {
public:
    string maximumTime(string time) {
        string ans = "";
        if (time[0] == '?' && (time[1] < '4' || time[1] == '?')) {
            ans += '2';
        }
        else if (time[0] == '?') {
            ans += '1';
        }
        else {
            ans += time[0];
        }
        if (time[1] == '?' && (ans[0] == '1' || ans[0] == '0')) {
            ans += '9';
        }
        else if (time[1] == '?' && (ans[0] == '2')) {
            ans += '3';
        }
        else {
            ans += time[1];
        }
        ans += ':';
        if (time[3] == '?') {
            ans += '5';
        }
        else {
            ans += time[3];
        }
        if (time[4] == '?') {
            ans += '9';
        }
        else {
            ans += time[4];
        }
        return ans;
    }
};
