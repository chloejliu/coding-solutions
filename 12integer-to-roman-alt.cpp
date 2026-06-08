//2-2
class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> hm;
        hm[1] = 'I';
        hm[4] = "IV";
        hm[5] = 'V';
        hm[9] = "IX";
        hm[10] = 'X';
        hm[40] = "XL";
        hm[50] = 'L';
        hm[90] = "XC";
        hm[100] = 'C';
        hm[400] = "CD";
        hm[500] = "D";
        hm[900] = "CM";
        hm[1000] = 'M';
        string ans = "";
        int digits = 0;
        for (int i = num; i > 0; i /= 10, digits++) {
            continue;
        }
        for (; digits > 0; digits--) {
            int curDigit = num / pow(10, digits-1);
            num = num % (int) pow(10, digits-1);
            if (curDigit >= 5 && curDigit != 9) {
                ans += hm[5 * pow(10, digits-1)];
                curDigit -= 5;
            }
            else if (curDigit == 4) {
                ans += hm[4 * pow(10, digits-1)];
                continue;
            }
            else if (curDigit == 9) {
                ans += hm[9 * pow(10, digits-1)];
                continue;
            }
            while (curDigit > 0) {
                ans += hm[pow(10, digits-1)];
                curDigit--;
            }
        }
        return ans;
    }
};
