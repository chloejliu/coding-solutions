//1-1
class Solution {
public:
    int maximum69Number (int num) {
        int tmp = num;
        int digits = 0;
        for (; tmp > 0; tmp /= 10) {
            digits++;
        }
        digits--;
        tmp = num;
        while (digits > -1 && tmp > 0) {
            if (tmp / (int) pow(10, digits) == 6) {
                num += 3 * pow(10, digits);
                return num;
            }
            tmp = tmp % (int) pow(10, digits);
            digits--;
        }
        return num;
    }
};
