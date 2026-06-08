//1-3
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int power = 0;
        bool more = true;
        while (true) {
            int tmppower = power;
            long long sum = 0;
            while (tmppower >= 0) {
                sum += 1LL * pow(26, tmppower);
                tmppower--;
            }

            if (sum > columnNumber) {
                break;
            }

            power++;
        }
        power--;

        for (int i = power; i >= 0; i--) {
            int tmp = columnNumber;
            for (int k = 0; k < i; k++) {
                tmp -= pow(26, k);
            }
            int j = 1;
            for (; j * pow(26, i) <= tmp; j++) {
                continue;
            }
            j--;
            columnNumber -= j * pow(26, i);
            j--;
            ans += (j+'A');
        }

        return ans;
    }
};
