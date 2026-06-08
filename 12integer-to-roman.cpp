//1-1
class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int digits = 0;
        int copy = num;
        while (copy > 0) {
            copy /= 10;
            digits++;
        }

        for(; digits > 0; digits--) {
            int tmp = pow(10, digits-1);
            int curDigit = num/tmp;
            num = num % tmp;
            if (curDigit <= 3) {
                while (curDigit > 0) {
                    if (digits == 4) {
                        ans += 'M';
                    }
                    else if (digits == 3) {
                        ans += 'C';
                    }
                    else if (digits == 2) {
                        ans += 'X';
                    }
                    else {
                        ans += 'I';
                    }
                    curDigit--;
                }
            }
            else if (curDigit == 5) {
                if (digits == 3) {
                    ans += 'D';
                }
                else if (digits == 2) {
                    ans += 'L';
                }
                else {
                    ans += 'V';
                }
            }
            else if (curDigit == 9) {
                if (digits == 3) {
                    ans += "CM";
                }
                else if (digits == 2) {
                    ans += "XC";
                }
                else {
                    ans += "IX";
                }
            }
            else if (curDigit == 4) {
                if (digits == 3) {
                    ans += "CD";
                }
                else if (digits == 2) {
                    ans += "XL";
                }
                else {
                    ans += "IV";
                }
            }
            else {
                curDigit -= 5;
                if (digits == 3) {
                    ans += 'D';
                }
                else if (digits == 2) {
                    ans += 'L';
                }
                else {
                    ans += 'V';
                }
                while (curDigit > 0) {
                    if (digits == 3) {
                        ans += 'C';
                    }
                    else if (digits == 2) {
                        ans += 'X';
                    }
                    else {
                        ans += 'I';
                    }
                    curDigit--;
                }
            }
        }
        return ans;
    }
};
