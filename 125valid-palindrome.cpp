//1-2
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = s.length() - 1; i >= 0; i--) {
            if ((int) s[i] >= 65 && (int) s[i] <= 90) {
                s[i] = (char) ((int) (s[i]) + 96);
            }
            if ((int) s[i] >= 48 && (int) s[i] <= 57) {
                continue;
            }
            if ((int) s[i] < 97 || (int) s[i] > 122) {
                s.erase(i, 1);
            }
        }
        cout << s << endl << s.length() << endl;;
        int right = s.length() - 1;
        // if (s.length() % 2 == 0) {
        //     for (int left = 0; left < s.length() / 2; left++) 
        //         if (s[left] != s[right]) {
        //             return false;
        //         }
        //         else {
        //             right--;
        //         }
        //     }
        // }
        // else {
        //     for (int left = 0; left < s.length() / 2; left++) {
        //         if (s[left] != s[right]) {
        //             cout << s[left] << " " << s[right] << endl << left << " " << right;
        //             return false;
        //         }
        //         else {
        //             right--;
        //         }
        //     }
        // }
        for (int left = 0; left < s.length() / 2; left++) {
            if (s[left] != s[right]) {
                return false;
            }
            else {
                right--;
            }
        }
        return true;
    }
};
