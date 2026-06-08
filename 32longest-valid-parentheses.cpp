//1-4
class Solution {
public:
    // void sySo(stack<pair<char, int>> st) {
    //     for (int i = 0; i < st.size(); i++) {
    //         cout << st.top();
    //         st.pop();
    //     }
    //     cout << endl;
    // }
    int longestValidParentheses(string s) {
        stack<pair<char, int>> st;
        int curLong = 0;
        int maxLong = 0;
        for (int i = 0; i < s.length(); i++) {
            //sySo(st);
            //cout <<  " " << i << " " << s[i] << endl;
            if (!st.empty() && st.top().first == ')') {
                // cout << maxLong << " " << curLong << endl;
                maxLong = max(maxLong, curLong);
                // cout << "maxLong " << maxLong << endl;
                curLong = 0;
                st.pop();
                st.push({s[i], i});
            }
            else if (!st.empty() && st.top().first == '(' && s[i] == ')') {
                st.pop();
                curLong += 2;
                // cout << "curLong was incremented to: " << curLong << endl;
            }
            else {
                st.push({s[i], i});
            }
        }
        while (!st.empty() && st.top().first == ')') {
            st.pop();
        }
        for (int i = 0; !st.empty(); i++) {
            curLong = 0;
            int lastIndex, firstIndex;
            if (i == 0) {
                lastIndex = s.length();
                if (st.size() == 1) {
                    if (st.top().second+1 < s.length()-1) {
                        string a = s.substr(st.top().second+1, s.length()-st.top().second-1);
                        maxLong = max(maxLong, longestValidParentheses(a));
                    }
                    if (st.top().second-1 > 0) {
                        string a = s.substr(0, st.top().second);
                        //cout << "substring is " << a << endl;
                        maxLong = max(maxLong, longestValidParentheses(a));
                    }
                    break;
                }
            }
            if (st.size() == 1 && st.top().second-1 > 0) {
                string a = s.substr(0, st.top().second);
                //cout << "substring is " << a << endl;
                maxLong = max(maxLong, longestValidParentheses(a));
            }
            firstIndex = st.top().second;
            string a = s.substr(firstIndex+1, lastIndex-firstIndex);
            lastIndex = firstIndex-1;
            st.pop();
            maxLong = max(maxLong, longestValidParentheses(a));
        }
        maxLong = max(maxLong, curLong);
        return maxLong;
    }
};
